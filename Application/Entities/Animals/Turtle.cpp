//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Animals.h"
#include "Turtle.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Turtle::Turtle(int x, int y, OrganismManager *organismManager)
:Animals(2,1,x,y,organismManager) {
  symbol = "TR";
  name = "Turtle";
}
void Turtle::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Action();
  Move();
}
void Turtle::Action() {
  int chance = rand() & 100 + 1;
  if (chance <= 75) {
    moveDirection = STAY;
    std::cout << "I prefere to stay at my place..." << NEWLINE_CONSOLE;
  }
  else {
    std::cout << "Okay, okay i will go..." << NEWLINE_CONSOLE;
    moveDirection = GetMove();
  }
}
void Turtle::Collision(Organism *defender, Organism *assulter) {
  if (defender == this) {
    if (assulter->GetPower() < 5)
      return;
    else {
      std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
      manager->SetOrganism(defender->GetXPos(),defender->GetYPos(),assulter);
      manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
      defender->SetDeath(true);
    }
  }
  else {
    if (defender->GetPower() <= assulter->GetPower()) {
      std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
      manager->SetOrganism(defender->GetXPos(),defender->GetYPos(),assulter);
      manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
      defender->SetDeath(true);
    }
    else
      return;
  }
}
void Turtle::Render() {
  std::cout << symbol << " ";
}
void Turtle::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* turtle = new Turtle(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,turtle);
}