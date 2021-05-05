//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Wolf.h"
#include "Animals.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Wolf::Wolf(int x, int y, OrganismManager *organismManager)
:Animals(9,4,x,y,organismManager) {
  symbol = "WL";
  name = "Wolf";
}
void Wolf::MakeTurn() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Move();
}
void Wolf::Action() {}
void Wolf::Collision(Organism *defender, Organism *assulter) {
  StandardCollision(defender,assulter);
}
void Wolf::Render() {
  std::cout << symbol << " ";
}
void Wolf::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* wolf = new Wolf(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,wolf);
}