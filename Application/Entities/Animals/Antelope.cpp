//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Animals.h"
#include "Antelope.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"


Antelope::Antelope(int x, int y, OrganismManager *organismManager)
    :Animals(4,4,x,y,organismManager) {
  symbol = "AT";
  name = "Antelope";
}
void Antelope::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Action();
}
void Antelope::Action() {
  for (int i = 1; i <= 2; i++)
    Move();
}
void Antelope::Collision() {}
void Antelope::Render() {
  std::cout << symbol << " ";
}
void Antelope::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* antelope = new Antelope(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,antelope);
}
