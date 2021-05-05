#include <iostream>
#include "Animals.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"
#include "Human.h"

Animals::Animals(int pow, int init, int x, int y, OrganismManager *organismManager)
    : Organism(pow, init, x, y, organismManager) {
  symbol = "AN";
  name = "Animal(ABSTRACT!!!)";
  moveDirection = STAY;
}

// Main Logic Behind moving organism across map.
void Animals::Move() {
  moveDirection = GetMove();
  std::cout << "\t✔︎ " << this->GetTypeToString() << " moves " << MoveDirectionToString() << NEWLINE_CONSOLE;
  if (CheckForCollision(moveDirection)) {
    std::cout << "\t✘ Collision on the way" << NEWLINE_CONSOLE;
    int objXPos = GetColliderXPos(moveDirection);
    int objYPos = GetColliderYPos(moveDirection);
    ResolveCollision(this, manager->GetOrganism(objXPos, objYPos));
  } else
    ChangePosition();
} // ✔︎
void Animals::ChangePosition() {
  int newXPos = xPos, newYPos = yPos;
  switch (moveDirection) {
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
    case STAY:
      break;
  }
  manager->SetField(newXPos, newYPos, this);
  manager->UpdateOrganismPosition(newXPos, newYPos, this);
} // ✔︎
void Animals::StandardCollision(Organism *defender, Organism *assulter) {
  if (assulter->GetPower() >= defender->GetPower()) {
    std::cout << "\t" << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString()
              << NEWLINE_CONSOLE;
    manager->HandleKillCollision(defender, assulter);
  } else {
    std::cout << "\t" << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString()
              << NEWLINE_CONSOLE;
    manager->KillOrganism(assulter);
    manager->SetFieldFree(assulter->GetXPos(), assulter->GetYPos());
  }
}

void Animals::ResolveCollision(Organism *assulter, Organism *defender) {
  if (typeid(*assulter) == typeid(*defender))
    Reproduce();
  else if (typeid(*defender) == typeid(Turtle))
    dynamic_cast<Turtle *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Antelope))
    dynamic_cast<Antelope *>(defender)->Collision(defender, assulter);
  else if (typeid(*assulter) == typeid(Antelope))
    dynamic_cast<Antelope *>(assulter)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Guarana))
    dynamic_cast<Guarana *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Wolfberry))
    dynamic_cast<Wolfberry *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Pineborscht))
    dynamic_cast<Pineborscht *>(defender)->Collision(defender, assulter);
  else
    defender->Collision(defender, assulter);
}

std::string Animals::GetTypeToString() {
  return name;
}

std::string Animals::MoveDirectionToString() const {
  switch (moveDirection) {
    case UP:
      return "up";
    case DOWN:
      return "down";
    case LEFT:
      return "left";
    case RIGHT:
      return "right";
    case STAY:
      return "nowhere";
  }
}

int Animals::GetMoveDirection() const {
  return moveDirection;
}

void Animals::SetMoveDirection(int direction) {
  moveDirection = direction;
}

Animals::~Animals() {
  symbol = name = "";
}





