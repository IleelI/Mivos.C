//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Grass.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Grass::Grass(int x, int y, OrganismManager *organismManager)
    : Plants(0, x, y, organismManager) {
  symbol = "GR";
  name = "Grass";
}

void Grass::MakeTurn() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Reproduce();
}

void Grass::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto *grass = new Grass(xPos, yPos, manager);
  manager->AddOrganism(xPos, yPos, grass);
}

void Grass::Action() {}

void Grass::Collision(Organism *defender, Organism *assulter) {
  std::cout << assulter->GetTypeToString() << " has eaten " << defender->GetTypeToString() << NEWLINE_CONSOLE;
  manager->HandleKillCollision(defender, assulter);
}

void Grass::Render() {
  std::cout << symbol << " ";
}