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

  void MakeTurn() override = 0;

  virtual void Move();

  void ChangePosition();

  void ResolveCollision(Organism *curr, Organism *target);

  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override = 0;

public:
  Animals(int pow, int init, int x, int y, OrganismManager *organismManager);

  void Collision(Organism *defender, Organism *assulter) override = 0;

  void StandardCollision(Organism *defender, Organism *assulter);

  std::string GetTypeToString() override;

  std::string MoveDirectionToString() const;

  int GetMoveDirection() const;

  void SetMoveDirection(int direction);

  void Render() override = 0;

  ~Animals() override;
};


#endif
