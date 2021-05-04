#include <iostream>
#include "Application/Entities/OrganismManager.h"
#include "Application/Entities/Animals/Sheep.h"

int main() {
  auto* manager = new OrganismManager();
  Sheep* pier = new Sheep(3,3,manager);
  Sheep* dolly = new Sheep(3,4,manager);
  manager->AddOrganism(3,3,pier);
  manager->AddOrganism(3,4,dolly);
  manager->PrintOrganisms();
  manager->OrganismsAction();
  manager->PrintOrganisms();
  return 0;
}
