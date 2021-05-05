//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Wolfberry.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Wolfberry::Wolfberry(int x, int y, OrganismManager *organismManager)
    : Plants(99, x, y, organismManager) {
  symbol = "WB";
  name = "Wolfberry";
}

void Wolfberry::MakeTurn() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Reproduce();
}

void Wolfberry::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  Wolfberry *wolfberry = new Wolfberry(xPos, yPos, manager);
  manager->AddOrganism(xPos, yPos, wolfberry);
}

void Wolfberry::Action() {}

void Wolfberry::Collision(Organism *defender, Organism *assulter) {
  std::cout << assulter->GetTypeToString() << " has eaten " << defender->GetTypeToString() << NEWLINE_CONSOLE;
  assulter->SetDeath(true);
  defender->SetDeath(true);
  manager->SetFieldFree(defender->GetXPos(), defender->GetYPos());
  manager->SetFieldFree(assulter->GetXPos(), assulter->GetYPos());
}

void Wolfberry::Render() {
  std::cout << symbol << " ";
}
