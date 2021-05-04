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
void Animals::ResolveCollision(Organism *curr, Organism *target) {
  if (typeid(curr) == typeid(target))
    Reproduce();
  else if (typeid(target) == typeid(Turtle)) {
  }
  else if (typeid(target) == typeid(Antelope)) {
  }
  else if (typeid(target) == typeid(Guarana)) {
  }
  else if (typeid(target) == typeid(Wolfberry)) {
  }
  else if (typeid(target) == typeid(Pineborscht)) {
  }
  else {
    this->Collision();
  }

}
std::string Animals::GetTypeToString() {
  return name;
}
Animals::~Animals() {
  symbol = name = "";
}





