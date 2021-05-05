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
void Wolf::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Move();
}
void Wolf::Action() {}
void Wolf::Collision(Organism *defender, Organism *assulter) {
  if (assulter->GetPower() >= defender->GetPower()) {
    std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
    manager->SetOrganism(defender->GetXPos(),defender->GetYPos(),assulter);
    manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
    defender->SetDeath(true);
  }
  else {
    std::cout << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
    manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
    assulter->SetDeath(true);
  }
}
void Wolf::Render() {
  std::cout << symbol << " ";
}
void Wolf::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* wolf = new Wolf(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,wolf);
}