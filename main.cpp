#include <iostream>
#include "Application/Entities/OrganismManager.h"
#include "Application/Entities/Animals/Sheep.h"

int main() {
  std::cout << CLEAR_CONSOLE;
  auto* manager = new OrganismManager();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->GenerateOrganism();
  manager->PrintOrganisms();
  manager->OrganismsAction();
  manager->PrintOrganisms();
  manager->OrganismsAction();
  manager->PrintOrganisms();
  manager->OrganismsAction();
  manager->PrintOrganisms();
  manager->OrganismsAction();
  manager->PrintOrganisms();
  return 0;
}
