//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Pineborscht.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Pineborscht::Pineborscht(int x, int y, OrganismManager *organismManager)
:Plants(10,x,y,organismManager) {
  symbol = "PB";
  name = "Pineborscht";
}
void Pineborscht::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Reproduce();
}
void Pineborscht::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* pineborscht = new Pineborscht(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,pineborscht);
}
void Pineborscht::Action() {}
void Pineborscht::Collision() {}
void Pineborscht::Render() {
  std::cout << symbol << " ";
}