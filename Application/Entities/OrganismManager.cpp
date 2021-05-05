#include <iostream>
#include <typeinfo>
#include <unistd.h>
#include "OrganismManager.h"
#include "Animals/Human.h"

OrganismManager::OrganismManager() {
  srand(time(NULL));
  player = nullptr;
  turns = 1;
}

// Object Generation
  // Coordinates Generation
int OrganismManager::GenerateXPos() {
  return rand() % MAP_SIZE;
}
int OrganismManager::GenerateYPos() {
  return rand() % MAP_SIZE;
}
int OrganismManager::GenerateType() {


  return rand() % 9;
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
  SetField(xPos,yPos,organism);
  organisms.insert(organisms.end(),organism);
}
void OrganismManager::GenerateSimulation() {
  player = new Human(MAP_SIZE / 2, MAP_SIZE / 2, this);
  AddOrganism(MAP_SIZE / 2, MAP_SIZE / 2, player);
  for (int i = 0; i < MAP_SIZE + MAP_SIZE/2; i++)
    GenerateOrganism();
}

// Managing Objects
  // Used when object reproduce
void OrganismManager::AddOrganism(int x, int y, Organism* newOrganism) {
  organismsMap[y][x] = newOrganism;
  organisms.insert(organisms.end(), newOrganism);
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
void OrganismManager::OrganismsTurn() {
  if (player)
    player->MakeTurn();
  for (auto& item: organisms) {
    if (item != player)
      if (!item->hasDied)
        item->MakeTurn();
  }
}
void OrganismManager::CheckPlayer() {
  if (player->hasDied) {
    PrintOrganisms();
    std::cout << "Player has died, end of game..." << NEWLINE_CONSOLE;
    sleep(5);
    Exit();
  }
}
void OrganismManager::CheckOrganisms() {
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
  if (player)
    if (player->IsAbilityOnCD())
      player->DecreasCooldown();
}
void OrganismManager::OrganismsAction() {
  SortOrganisms();
  OrganismsTurn();
  CheckPlayer();
  CheckOrganisms();
  turns++;
}
void OrganismManager::KillOrganism(Organism* organism) {
  organism->SetDeath(true);
  SetFieldFree(organism->xPos,organism->yPos);
}
void OrganismManager::HandleKillCollision(Organism* defender, Organism* assulter) {
  KillOrganism(defender);
  SetField(defender->GetXPos(),defender->GetYPos(),assulter);
  UpdateOrganismPosition(defender->GetXPos(),defender->GetYPos(),assulter);
}

// Logging Objects
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

// Getters
Organism* OrganismManager::GetOrganism(int x, int y) const {
  return organismsMap[y][x];
}
int OrganismManager::GetOrganismIdx(Organism* organism) const {
  int idx = 0;
  for (const auto& item: organisms) {
    if (organism == item)
      return idx;
    idx++;
  }
  return -1;
}
int OrganismManager::GetTurns() const {
  return turns;
}
// Setters
void OrganismManager::SetField(int x, int y, Organism *newOrganism) {
  SetFieldFree(newOrganism->GetXPos(),newOrganism->GetYPos());
  organismsMap[y][x] = newOrganism;
}
void OrganismManager::SetFieldFree(int x, int y) {
  organismsMap[y][x] = nullptr;
}
void OrganismManager::UpdateOrganismPosition(int x, int y, Organism* organism) {
  organism->SetXPos(x);
  organism->SetYPos(y);
}

// Handling Simulation State
void OrganismManager::Turn() {
  PrintOrganisms();
  OrganismsAction();
}
void OrganismManager::Exit() {
  exit(0);
}

// Deconstructor
OrganismManager::~OrganismManager() {
  for (auto& row: organismsMap)
    for (auto &item : row)
      delete item;
}