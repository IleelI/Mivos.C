//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Dandelion.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Dandelion::Dandelion(int x, int y, OrganismManager *organismManager)
    : Plants(0, x, y, organismManager) {
  symbol = "DN";
  name = "Dandelion";
}

void Dandelion::MakeTurn() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  this->Reproduce();
}

void Dandelion::Reproduce() {
  int attempt = 0;
  bool reproduce = false;
  while (attempt < DANDELION_REPRODUCE_ATTEMPS) {
    reproduce = CheckForReproduce();
    if (reproduce)
      break;
    attempt++;
  }
  if (reproduce) {
    int reproduceDirection = GetFreePosition();
    if (reproduceDirection == STAY)
      std::cout << "\t✘ No place for reproduction!" << NEWLINE_CONSOLE;
    else {
      std::cout << "\t✔︎ Reproduction successful!" << NEWLINE_CONSOLE;
      int newXPos = xPos, newYPos = yPos;
      switch (reproduceDirection) {
        case UP:
          newYPos -= 1;
          break;
        case DOWN:
          newYPos += 1;
          break;
        case LEFT:
          newXPos -= 1;
          break;
        case RIGHT:
          newXPos += 1;
          break;
      }
      CreateTypedOrganism(newXPos, newYPos, manager);
    }
  } else
    std::cout << "\t✘ Reproduction Failed!" << NEWLINE_CONSOLE;
}

void Dandelion::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto *dandelion = new Dandelion(xPos, yPos, manager);
  manager->AddOrganism(xPos, yPos, dandelion);
}

void Dandelion::Action() {}

void Dandelion::Collision(Organism *defender, Organism *assulter) {
  std::cout << assulter->GetTypeToString() << " has eaten " << defender->GetTypeToString() << NEWLINE_CONSOLE;
  manager->HandleKillCollision(defender, assulter);
}

void Dandelion::Render() {
  std::cout << symbol << " ";
}