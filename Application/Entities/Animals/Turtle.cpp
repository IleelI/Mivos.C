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
void Turtle::MakeTurn() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Action();
}
void Turtle::Action() {
  int chance = rand() & 100 + 1;
  if (chance <= 75)
    std::cout << "\t" << "I prefer to stay at my place..." << NEWLINE_CONSOLE;
  else {
    std::cout << "\tOkay, okay i will go..." << NEWLINE_CONSOLE;
    Move();
  }
}
void Turtle::Collision(Organism *defender, Organism *assulter) {
  if (defender == this) {
    if (assulter->GetPower() < 5) {
      std::cout <<"\t"<< defender->GetTypeToString() << " has reflected attacks from " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
      return;
    }
    else {
      std::cout << "\t" << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
      manager->HandleKillCollision(defender,assulter);
    }
  }
  else
    if (assulter->GetPower() >= defender->GetPower()) {
      std::cout << "\t"<< assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
      manager->HandleKillCollision(defender,assulter);
    }
}
void Turtle::Render() {
  std::cout << symbol << " ";
}
void Turtle::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* turtle = new Turtle(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,turtle);
}