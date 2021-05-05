//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Sheep.h"
#include "Animals.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Sheep::Sheep(int x, int y, OrganismManager *organismManager)
:Animals(4,4,x,y,organismManager) {
  symbol = "SE";
  name = "Sheep";
}
void Sheep::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Move();
}
void Sheep::Action() {}
void Sheep::Collision(Organism *defender, Organism *assulter) {
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
void Sheep::Render() {
  std::cout << symbol << " ";
}
void Sheep::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* sheep = new Sheep(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,sheep);
}
