#ifndef MIVOS_ORGANISMMANAGER_H
#define MIVOS_ORGANISMMANAGER_H
#include <vector>
#include "Organism.h"
#include "AllOrganisms.h"
#include "../consts&enums.h"

class OrganismManager {
private:
  Organism* organismsMap[MAP_SIZE][MAP_SIZE]{nullptr};
  std::vector<Organism*>organisms;
  static int GenerateXPos();
  static int GenerateYPos();
  static int GenerateType();
  int IdxOfOrganism(Organism* organism) const;
  void SortOrganisms();
public:
  OrganismManager();
  // Random Generation
  void GenerateOrganism();
  // Addition
  void AddOrganism(int x, int y, Organism* newOrganism); // Used when reproducing organismsMap
  // Removal
  // Setter
  void SetOrganism(int x, int y, Organism* newOrganism);
  // Getter
  Organism* GetOrganism(int x, int y) const;
  // Renderer+
  void PrintOrganisms() const;
  // Turn Action
  void OrganismsAction();
  ~OrganismManager();
};

#endif