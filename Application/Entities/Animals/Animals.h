#ifndef MIVOS_ANIMALS_H
#define MIVOS_ANIMALS_H

#include <string>
#include "../Organism.h"

class Animals : public Organism {
protected:
  int moveDirection;
  std::string name;
  std::string symbol;
  void Action() override = 0;
  void MakeMove() override = 0;
  void Collision() override = 0;
  void ResolveCollision(Organism* curr, Organism* target);
  void Move();
  void ChangePosition();
  std::string GetTypeToString() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override = 0;
public:
  Animals(int pow, int init, int x, int y, OrganismManager* organismManager);
  void Render() override = 0;
  ~Animals() override;
};


#endif
