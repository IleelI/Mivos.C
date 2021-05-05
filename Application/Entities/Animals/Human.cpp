//
// Created by Bartosz Elert on 05/05/2021.
//

#include <iostream>
#include <unistd.h>
#include "Human.h"
#include "../OrganismManager.h"
#include "../../consts&enums.h"

Human::Human(int x, int y, OrganismManager *organismManager)
:Animals(5,4,x,y,organismManager) {
  symbol = "⎔";
  name = "Player";
  onCooldown = false;
  specialCooldown = 0;
}

void Human::TakePlayerInput() {
  std::cout << "Enter the move direction(WASD or R for Stay): ";
  do {
    char command;
    if (moveDirection == -1)
      std::cout << "Please enter correct direction: ";
    std::cin >> command;
    switch (command) {
      case 'W':
        moveDirection = UP;
        break;
      case 'S':
        moveDirection = DOWN;
        break;
      case 'A':
        moveDirection = LEFT;
        break;
      case 'D':
        moveDirection = RIGHT;
        break;
      case 'R':
        moveDirection = STAY;
        break;
      default:
        moveDirection = -1;
    }
  } while (moveDirection == -1);
}
void Human::MovePlayer() {
  TakePlayerInput();
  while (!CheckMapBounds(moveDirection)) {
    std::cout << "Please enter correct direction." << NEWLINE_CONSOLE;
    TakePlayerInput();
  }
  std::cout << "\t✔︎" << this->GetTypeToString() << " moves " << MoveDirectionToString() << NEWLINE_CONSOLE;
  if (CheckForCollision(moveDirection)) {
    int objXPos = GetColliderXPos(moveDirection);
    int objYPos = GetColliderYPos(moveDirection);
    ResolveCollision(this, manager->GetOrganism(objXPos,objYPos));
  }
  else
    ChangePosition();
}
void Human::CheckForAction() {
  char command;
  do {
    std::cout << "Enter what you want to do." << NEWLINE_CONSOLE;
    std::cout << "Move(M) Ability(A) Exit(E): ";
    std::cin >> command;
    switch (command) {
      case 'M':
        MovePlayer();
        command = 'M';
        break;
      case 'A':
        if (onCooldown) {
          command = 'p';
          std::cout << "Ability on Colldown, chose different action." << NEWLINE_CONSOLE;
          break;
        }
        Action();
        command = 'A';
        break;
      case 'E':
        manager->Exit();
        break;
      default:
        command = 'p';
        break;
    }
  } while (command != 'M' && command != 'A' );
}
void Human::MakeTurn() {
  std::cout << "Player turn!" << NEWLINE_CONSOLE;
  CheckForAction();
}

void Human::Action() {
  onCooldown = true;
  specialCooldown = SPECIAL_ABILITY_CD;
  std::cout << "Special ability has been used!" << NEWLINE_CONSOLE;
  std::cout << "Every organism in range of player is dead! Time on cooldown: " << SPECIAL_ABILITY_CD << NEWLINE_CONSOLE;
  if (CheckMapBounds(UP))
    if (CheckForCollision(UP))
      manager->KillOrganism(manager->GetOrganism(xPos,yPos-1));
  if (CheckMapBounds(DOWN))
    if (CheckForCollision(DOWN))
      manager->KillOrganism(manager->GetOrganism(xPos,yPos+1));
  if (CheckMapBounds(LEFT))
    if (CheckForCollision(LEFT))
      manager->KillOrganism(manager->GetOrganism(xPos-1,yPos));
  if (CheckMapBounds(RIGHT))
    if(CheckForCollision(RIGHT))
      manager->KillOrganism(manager->GetOrganism(xPos+1,yPos));
}
void Human::Collision(Organism *defender, Organism *assulter) {
  StandardCollision(defender,assulter);
}
void Human::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {;}
void Human::DecreasCooldown() {
  specialCooldown--;
  if (specialCooldown == 0) {
    onCooldown = false;
    specialCooldown = 0;
  }
}
bool Human::IsAbilityOnCD() const {
  return onCooldown;
}
void Human::Render() {
  std::cout << symbol << " ";
}