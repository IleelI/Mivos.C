#include <iostream>
#include "Organism.h"
#include "../consts&enums.h"
#include "OrganismManager.h"

Organism::Organism(int pow, int init, int x, int y, OrganismManager *organismManager) {
  xPos = x;
  yPos = y;
  power = pow;
  lifeLength = 0;
  hasDied = false;
  initiative = init;
  manager = organismManager;
}
// Move Generation
int Organism::GetMove() const {
  int moveDirection;
  do moveDirection = GenerateDirection();
  while (!CheckMapBounds(moveDirection));
  return moveDirection;
}
int Organism::GetFreePosition() const {
  if (!CheckForCollision(UP) && CheckMapBounds(UP))
    return UP;
  else if (!CheckForCollision(DOWN) && CheckMapBounds(DOWN))
    return DOWN;
  else if (!CheckForCollision(LEFT) && CheckMapBounds(LEFT))
    return LEFT;
  else if (!CheckForCollision(RIGHT) && CheckMapBounds(RIGHT))
    return RIGHT;
  else
    return STAY;
}
int Organism::GenerateDirection() {
  long num = rand() % 100 + 1;
  if (num <= 25)
    return UP;
  else if (num <= 50)
    return DOWN;
  else if (num <= 75)
    return LEFT;
  else
    return RIGHT;
}
// Additional Object Generation
void Organism::Reproduce() {
  if (CheckForReproduce()) {
    int reproduceDirection = GetFreePosition();
    if (reproduceDirection == STAY) {
      std::cout << "\t✘ No place for reproduction!" << NEWLINE_CONSOLE;
      return;
    }
    else {
      std::cout << "\t✔︎ Reproduction successful!" << NEWLINE_CONSOLE;
      int newXPos=xPos, newYPos=yPos;
      switch (reproduceDirection) {
        case UP:
          newYPos-=1;
          break;
        case DOWN:
          newYPos+=1;
          break;
        case LEFT:
          newXPos-=1;
          break;
        case RIGHT:
          newXPos+=1;
          break;
      }
      this->CreateTypedOrganism(newXPos,newYPos,manager);
    }
  }
  else {
    std::cout << "\t✘ Reproduction Failed!" << NEWLINE_CONSOLE;
    return;
  }
}
// Bound Checking, Collision Checkcing, Checking for Reproduce
bool Organism::CheckMapBounds(int moveDirection) const {
  switch (moveDirection) {
    case UP:
      return (yPos - 1 >= 0);
    case DOWN:
      return (yPos + 1 < MAP_SIZE);
    case LEFT:
      return (xPos - 1 >= 0);
    case RIGHT:
      return (xPos + 1 < MAP_SIZE);
    case STAY:
      return true;
  }
  return false;
}
bool Organism::CheckForCollision(int moveDirection) const {
  switch (moveDirection) {
    case UP:
      return (manager->GetOrganism(xPos,yPos-1));
    case DOWN:
      return (manager->GetOrganism(xPos,yPos+1));
    case LEFT:
      return (manager->GetOrganism(xPos-1,yPos));
    case RIGHT:
      return (manager->GetOrganism(xPos+1,yPos));
    case STAY:
      return false;
  }
  return false;
}
bool Organism::CheckForReproduce() {
  int chance = rand() % 100 + 1;
  return chance <= 8;
}
// Getters
int Organism::GetPower() const {
  return this->power;
}
int Organism::GetInitiative() const {
  return this->initiative;
}
int Organism::GetLifeLength() const {
  return this->lifeLength;
}
int Organism::GetXPos() const {
  return xPos;
}
int Organism::GetYPos() const {
  return yPos;
}
int Organism::GetColliderXPos(int moveDirection) const {
  if (moveDirection == LEFT)
    return xPos-1;
  else if (moveDirection == RIGHT)
    return xPos+1;
  else
    return xPos;
}
int Organism::GetColliderYPos(int moveDirection) const {
  if (moveDirection == UP)
    return yPos-1;
  else if (moveDirection == DOWN)
    return yPos+1;
  else
    return yPos;
}
// Setters
void Organism::SetDeath(bool state) {
  hasDied = state;
}
void Organism::SetPower(int newPower) {
  power = newPower;
}
void Organism::SetXPos(int x) {
  xPos = x;
}
void Organism::SetYPos(int y) {
  yPos = y;
}
Organism::~Organism() {
  power = initiative = lifeLength = xPos = yPos = 0;
}