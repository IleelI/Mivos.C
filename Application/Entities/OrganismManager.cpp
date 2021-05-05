#include <iostream>
#include <typeinfo>
#include "OrganismManager.h"

OrganismManager::OrganismManager() {
  srand(time(NULL));
};
int OrganismManager::GenerateXPos() {
  return rand() % MAP_SIZE;
}
int OrganismManager::GenerateYPos() {
  return rand() % MAP_SIZE;
}
int OrganismManager::GenerateType() {
  return rand() % 9;
}
int OrganismManager::IdxOfOrganism(Organism* organism) const {
  int idx = 0;
  for (const auto& item: organisms) {
    if (organism == item)
      break;
    idx++;
  }
  return idx;
}
void OrganismManager::SortOrganisms() {
  std::sort(organisms.begin(), organisms.end(),
            [](Organism* org1, Organism* org2) {
    int init1 = org1->initiative;
    int init2 = org2->initiative;
    int life1 = org1->lifeLength;
    int life2 = org2->lifeLength;
    return (std::tie(init2,life1) < std::tie(init1,life2));
  });
}
void OrganismManager::GenerateOrganism() {
  Organism* organism;
  int xPos, yPos;
  bool correctCoords = false;
  while (!correctCoords) {
    xPos = GenerateXPos(); yPos = GenerateYPos();
    if (organismsMap[yPos][xPos] == nullptr)
      correctCoords = true;
  }
  switch (GenerateType()) {
    case SHEEP:
      organism = new Sheep(xPos,yPos,this);
      break;
    case WOLF:
      organism = new Wolf(xPos,yPos,this);
      break;
    case FOX:
      organism = new Fox(xPos,yPos,this);
      break;
    case TURTLE:
      organism = new Turtle(xPos,yPos,this);
      break;
    case ANTELOPE:
      organism = new Antelope(xPos,yPos,this);
      break;
    case GRASS:
      organism = new Grass(xPos,yPos,this);
      break;
    case DANDELION:
      organism = new Dandelion(xPos,yPos,this);
      break;
    case GUARANA:
      organism = new Guarana(xPos,yPos,this);
      break;
    case WOLFBERRY:
      organism = new Wolfberry(xPos,yPos,this);
      break;
    case PINEBORSCHT:
      organism = new Pineborscht(xPos,yPos,this);
      break;
  }
  SetOrganism(xPos,yPos,organism);
  organisms.insert(organisms.end(),organism);
}
void OrganismManager::AddOrganism(int x, int y, Organism* newOrganism) {
  organismsMap[y][x] = newOrganism;
  organisms.insert(organisms.end(), newOrganism);
}
Organism* OrganismManager::GetOrganism(int x, int y) const {
  return organismsMap[y][x];
}
void OrganismManager::SetOrganism(int x, int y, Organism *newOrganism) {
  organismsMap[y][x] = newOrganism;
} // Not Needed?
void OrganismManager::PrintOrganisms() const {
  for (auto& row: organismsMap) {
    for (auto &item: row) {
      if (!item)
        std::cout << "~~" << " ";
      else
        item->Render();
    }
    std::cout << NEWLINE_CONSOLE;
  }
}
void OrganismManager::OrganismsAction() {
  SortOrganisms();
  for (auto& item: organisms) {
    if (!item->hasDied)
      item->MakeMove();
  }
  auto it = organisms.begin();
  int idx = 0;
  while (it != organisms.end()) {
    if (organisms[idx]->hasDied) {
      it = organisms.erase(it);
      idx--;
    }
    else {
      organisms[idx]->lifeLength++;
      it++;
    }
    idx++;
  }
}
OrganismManager::~OrganismManager() {
  for (auto& row: organismsMap)
    for (auto &item : row)
      delete item;
}