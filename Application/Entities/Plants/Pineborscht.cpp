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
void Pineborscht::MakeTurn() {
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
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos,yPos-1)))
      manager->KillOrganism(manager->GetOrganism(xPos,yPos-1));
  if (CheckMapBounds(DOWN))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos,yPos+1)))
      manager->KillOrganism(manager->GetOrganism(xPos,yPos+1));
  if (CheckMapBounds(LEFT))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos-1,yPos)))
      manager->KillOrganism(manager->GetOrganism(xPos-1,yPos));
  if (CheckMapBounds(RIGHT))
    if (dynamic_cast<Animals*>(manager->GetOrganism(xPos+1,yPos)))
      manager->KillOrganism(manager->GetOrganism(xPos+1,yPos));
}
void Pineborscht::Collision(Organism *defender, Organism *assulter) {
  std::cout << assulter->GetTypeToString() << " has eaten " << defender->GetTypeToString() << NEWLINE_CONSOLE;
  defender->SetDeath(true);
  assulter->SetDeath(true);
  manager->SetFieldFree(defender->GetXPos(),defender->GetYPos());
  manager->SetFieldFree(assulter->GetXPos(),defender->GetYPos());
}
void Pineborscht::Render() {
  std::cout << symbol << " ";
}