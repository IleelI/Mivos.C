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
void Fox::Move() {
  std::cout << "\t✔︎ " << this->GetTypeToString() << " moves " << MoveDirectionToString() << NEWLINE_CONSOLE;
  if (CheckForCollision(moveDirection)) {
    std::cout << "\t✘ ResolveCollision on the way" << NEWLINE_CONSOLE;
    int objXPos = GetColliderXPos(moveDirection);
    int objYPos = GetColliderYPos(moveDirection);
    ResolveCollision(this, manager->GetOrganism(objXPos, objYPos));
  }
  else
    ChangePosition();
}
void Fox::MakeTurn() {
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
  StandardCollision(defender,assulter);
}
void Fox::Render() {
  std::cout << symbol << " ";
}
void Fox::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* fox = new Fox(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,fox);
}