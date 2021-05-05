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
void Antelope::MakeTurn() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Action();
}
void Antelope::Action() {
  for (int i = 1; i <= 2; i++) {
    if (!hasDied)
      Move();
  }
}
void Antelope::Collision(Organism *defender, Organism *assulter) {
  int chance = rand() % 100 + 1;
  if (chance <= 50) {
    int freeMove;
    if ((freeMove = GetFreePosition()) == STAY) {
      std::cout << this->GetTypeToString() << " has nowhere to run!" << NEWLINE_CONSOLE;
      StandardCollision(defender, assulter);
    }
    else {
      if (this == assulter) {
        std::cout << assulter->GetTypeToString() << " has fled from fight with " << defender->GetTypeToString() << NEWLINE_CONSOLE;
        manager->SetField(GetColliderXPos(freeMove), GetColliderYPos(freeMove),assulter);
        manager->UpdateOrganismPosition(GetColliderXPos(freeMove), GetColliderYPos(freeMove), assulter);
      }
      else {
        std::cout << defender->GetTypeToString() << " has fled from fight with " << assulter->GetTypeToString() << NEWLINE_CONSOLE;
        manager->SetField(GetColliderXPos(freeMove), GetColliderYPos(freeMove),defender);
        manager->SetField(defender->GetXPos(),defender->GetYPos(),assulter);
        manager->UpdateOrganismPosition(defender->GetXPos(),defender->GetYPos(),assulter);
        manager->UpdateOrganismPosition(GetColliderXPos(freeMove), GetColliderYPos(freeMove),defender);
      }
    }
  }
  else {
    std::cout << this->GetTypeToString() << " was not able to flee from fight!" << NEWLINE_CONSOLE;
    StandardCollision(defender, assulter);
  }
}
void Antelope::Render() {
  std::cout << symbol << " ";
}
void Antelope::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* antelope = new Antelope(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,antelope);
}
