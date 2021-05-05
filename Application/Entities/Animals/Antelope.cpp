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
void Antelope::Collision(Organism *defender, Organism *assulter) {
  int chance = rand() % 100 + 1;
  if (this == defender) {
    if (chance <= 50) {
      this->GetFreePosition();
      if (moveDirection == STAY) {
        std::cout << defender->GetTypeToString() << " has nowhere to run away!" << NEWLINE_CONSOLE;
        if (assulter->GetPower() >= defender->GetPower()) {
          std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
          manager->SetOrganism(defender->GetXPos(), defender->GetYPos(), assulter);
          manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
          defender->SetDeath(true);
        }
        else {
          std::cout << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
          manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
          assulter->SetDeath(true);
        }
      }
      else {
        std::cout << defender->GetTypeToString() << " runs away!" << NEWLINE_CONSOLE;
        this->ChangePosition();
      }
    }
    else {
      if (assulter->GetPower() >= defender->GetPower()) {
        std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
        manager->SetOrganism(defender->GetXPos(), defender->GetYPos(), assulter);
        manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
        defender->SetDeath(true);
      }
      else {
        std::cout << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
        manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
        assulter->SetDeath(true);
      }
    }
  }
  else {
    if (chance <= 50) {
      this->GetFreePosition();
      if (moveDirection == STAY) {
        std::cout << assulter->GetTypeToString() << " has nowhere to run away!" << NEWLINE_CONSOLE;
        if (defender->GetPower() >= assulter->GetPower()) {
          std::cout << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
          manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
          assulter->SetDeath(true);
        }
        else {
          std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
          manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
          manager->SetOrganism(defender->GetXPos(), defender->GetYPos(), assulter);
          defender->SetDeath(true);
        }
      }
      else {
        std::cout << assulter->GetTypeToString() << " runs away!" << NEWLINE_CONSOLE;
        this->ChangePosition();
      }
    }
    else {
      if (assulter->GetPower() >= defender->GetPower()) {
        std::cout << assulter->GetTypeToString() << " has killed " << defender->GetTypeToString() << NEWLINE_CONSOLE;
        manager->SetOrganism(defender->GetXPos(), defender->GetYPos(), assulter);
        manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
        defender->SetDeath(true);
      }
      else {
        std::cout << defender->GetTypeToString() << " has killed " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
        manager->SetOrganism(assulter->GetXPos(), assulter->GetYPos(), nullptr);
        assulter->SetDeath(true);
      }
    }
  }
}
void Antelope::Render() {
  std::cout << symbol << " ";
}
void Antelope::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* antelope = new Antelope(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,antelope);
}
