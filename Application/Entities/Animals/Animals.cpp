#include <iostream>
#include "Animals.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Animals::Animals(int pow, int init, int x, int y, OrganismManager *organismManager)
:Organism(pow,init,x,y,organismManager) {
  symbol = "AN";
  name = "Animal(ABSTRACT!!!)";
  moveDirection = STAY;
}
void Animals::Move() {
  moveDirection = GetMove();
  if (CheckForCollision(moveDirection)) {
    std::cout << "\t✘ ResolveCollision on the way" << NEWLINE_CONSOLE;
    int objXPos = GetColliderXPos(moveDirection);
    int objYPos = GetColliderYPos(moveDirection);
    ResolveCollision(this, manager->GetOrganism(objXPos, objYPos));
  }
  else
    ChangePosition();
}
void Animals::ChangePosition() {
  std::cout << "\t✔︎ Can safely move" << NEWLINE_CONSOLE;
  int newXPos=xPos, newYPos=yPos;
  switch (moveDirection) {
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
    case STAY:
      break;
  }
  manager->SetOrganism(xPos,yPos, nullptr);
  manager->SetOrganism(newXPos,newYPos,this);
  this->xPos = newXPos; this->yPos = newYPos;
}
void Animals::ResolveCollision(Organism *assulter, Organism *defender) {
  if (typeid(*assulter) == typeid(*defender)) {
    Reproduce();
    return;
  }
  else if (typeid(*defender) == typeid(Turtle))
    dynamic_cast<Turtle *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Antelope))
    dynamic_cast<Antelope *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Guarana))
    dynamic_cast<Guarana *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Wolfberry))
    dynamic_cast<Wolfberry *>(defender)->Collision(defender, assulter);
  else if (typeid(*defender) == typeid(Pineborscht))
    dynamic_cast<Pineborscht *>(defender)->Collision(defender, assulter);
  else
    defender->Collision(defender,assulter);
}
std::string Animals::GetTypeToString() {
  return name;
}
Animals::~Animals() {
  symbol = name = "";
}





