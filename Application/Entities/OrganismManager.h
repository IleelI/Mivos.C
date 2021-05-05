#ifndef MIVOS_ORGANISMMANAGER_H
#define MIVOS_ORGANISMMANAGER_H
#include <vector>
#include "Organism.h"
#include "AllOrganisms.h"
#include "Animals/Human.h"
#include "../consts&enums.h"

class OrganismManager {
private:
  Organism* organismsMap[MAP_SIZE][MAP_SIZE]{nullptr};
  std::vector<Organism*>organisms;
  Human* player;
  int turns;
  // Random Generation
  void GenerateOrganism();
  static int GenerateXPos();
  static int GenerateYPos();
  static int GenerateType();
  // Getter
  int GetOrganismIdx(Organism* organism) const;
  // Organisms Management
  void OrganismsTurn();
  void SortOrganisms();
  void CheckOrganisms();
  void CheckPlayer();
public:
  OrganismManager();
  // Addition
  void AddOrganism(int x, int y, Organism* newOrganism); // Used when reproducing organismsMap
  // Removal
  void KillOrganism(Organism* organism);
  void HandleKillCollision(Organism* defender, Organism* assulter);
  // Generation
  void GenerateSimulation();
  // Setter
  void SetField(int x, int y, Organism* newOrganism);
  void SetFieldFree(int x, int y);
  static void UpdateOrganismPosition(int x, int y, Organism* organism);
  // Getter
  Organism* GetOrganism(int x, int y) const;
  int GetTurns() const;
  // Renderer
  void PrintOrganisms() const;
  // Handling Simulation State
  void Turn();
  static void Exit();
  // Turn Action
  void OrganismsAction();
  ~OrganismManager();
};

#endif