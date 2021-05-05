//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Animals.h"
#include "Fox.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Fox::Fox(int x, int y, OrganismManager *organismManager)
:Animals(3,7,x,y,organismManager) {
  symbol = "FX";
  name = "Fox";
}
void Fox::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Action();
  Move();
}
void Fox::Action() {
  if (CheckMapBounds(UP)) {
    if (CheckForCollision(UP)) {
      if (manager->GetOrganism(xPos,yPos-1)->GetPower() < this->power) {
        moveDirection = UP;
        return;
      }
    }
    else {
      moveDirection = UP;
      return;
    }
  }
  if (CheckMapBounds(DOWN)) {
    if (CheckForCollision(DOWN)) {
      if (manager->GetOrganism(xPos,yPos+1)->GetPower() < this->power) {
        moveDirection = DOWN;
        return;
      }
    }
    else {
      moveDirection = DOWN;
      return;
    }
  }
  if (CheckMapBounds(LEFT)) {
    if (CheckForCollision(LEFT)) {
      if (manager->GetOrganism(xPos-1,yPos)->GetPower() < this->power) {
        moveDirection = LEFT;
        return;
      }
    }
    else {
      moveDirection = LEFT;
      return;
    }
  }
  if (CheckMapBounds(RIGHT)) {
    if (CheckForCollision(RIGHT)) {
      if (manager->GetOrganism(xPos,yPos+1)->GetPower() < this->power) {
        moveDirection = RIGHT;
        return;
      }
    }
    else {
      moveDirection = RIGHT;
      return;
    }
  }
  std::cout << "Fox stays in place " << NEWLINE_CONSOLE;
  moveDirection = STAY;
}
void Fox::Collision(Organism *defender, Organism *assulter) {
    if (assulter->GetPower() >= defender->GetPower()) {
      std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
      manager->SetOrganism(defender->GetXPos(),defender->GetYPos(),assulter);
      manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
      defender->SetDeath(true);
    }
    else {
      std::cout << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
      manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
      assulter->SetDeath(true);
    }
}
void Fox::Render() {
  std::cout << symbol << " ";
}
void Fox::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* fox = new Fox(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,fox);
}