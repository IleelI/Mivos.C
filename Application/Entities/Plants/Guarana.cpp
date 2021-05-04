//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Guarana.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Guarana::Guarana(int x, int y, OrganismManager *organismManager)
:Plants(0,x,y,organismManager) {
  symbol = "GA";
  name = "Guarana";
}
void Guarana::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Reproduce();
}
void Guarana::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* guarana = new Guarana(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,guarana);
}
void Guarana::Action() {}
void Guarana::Collision() {}
void Guarana::Render() {
  std::cout << symbol << " ";
}
