//
// Created by Bartosz Elert on 04/05/2021.
//

#include <iostream>
#include "Plants.h"
#include "Pineborscht.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Pineborscht::Pineborscht(int x, int y, OrganismManager *organismManager)
:Plants(10,x,y,organismManager) {
  symbol = "PB";
  name = "Pineborscht";
}
void Pineborscht::MakeMove() {
  std::cout << name << " turn!" << NEWLINE_CONSOLE;
  Reproduce();
  Action();
}
void Pineborscht::CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) {
  auto* pineborscht = new Pineborscht(xPos,yPos,manager);
  manager->AddOrganism(xPos,yPos,pineborscht);
}
void Pineborscht::Action() {
  std::cout << this->GetTypeToString() << " has killed all animals in it's area!" << NEWLINE_CONSOLE;
  if (CheckMapBounds(UP))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos,yPos-1))) {
      manager->GetOrganism(xPos,yPos-1)->SetDeath(true);
      manager->SetOrganism(xPos,yPos-1, nullptr);
    }
  if (CheckMapBounds(DOWN))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos,yPos+1))) {
      manager->GetOrganism(xPos,yPos+1)->SetDeath(true);
      manager->SetOrganism(xPos,yPos+1, nullptr);
    }
  if (CheckMapBounds(LEFT))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos-1,yPos))) {
      manager->GetOrganism(xPos-1,yPos)->SetDeath(true);
      manager->SetOrganism(xPos-1,yPos, nullptr);
    }
  if (CheckMapBounds(RIGHT))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos+1,yPos))) {
      manager->GetOrganism(xPos+1,yPos)->SetDeath(true);
      manager->SetOrganism(xPos+1,yPos, nullptr);
    }
}
void Pineborscht::Collision(Organism *defender, Organism *assulter) {
  std::cout << assulter->GetTypeToString() << " has eaten " << defender->GetTypeToString() << NEWLINE_CONSOLE;
  defender->SetDeath(true);
  assulter->SetDeath(true);
  manager->SetOrganism(defender->GetXPos(),defender->GetYPos(), nullptr);
  manager->SetOrganism(assulter->GetXPos(),assulter->GetYPos(), nullptr);
}
void Pineborscht::Render() {
  std::cout << symbol << " ";
}