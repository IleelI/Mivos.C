//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Wolfberry.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Wolfberry::Wolfberry(int x, int y, OrganismManager *organismManager)
:Plants(99,x,y,organismManager) {
  symbol = "WB";
  name = "Wolfberry";
}
void Wolfberry::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Reproduce();
}
void Wolfberry::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  Wolfberry* wolfberry = new Wolfberry(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,wolfberry);
}
void Wolfberry::Action() {}
void Wolfberry::Collision() {}
void Wolfberry::Render() {
  std::cout << symbol << " ";
}
