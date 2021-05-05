//
// Created by Bartosz Elert on 05/05/2021.
//

#ifndef MIVOS_HUMAN_H
#define MIVOS_HUMAN_H

#include "Animals.h"

class Human : public Animals {
private:
  bool onCooldown;
  int specialCooldown;
  friend OrganismManager;

  void MovePlayer();

  void TakePlayerInput();

  void CheckForAction();

protected:
  void Action() override;

  void MakeTurn() override;

  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;

public:
  Human(int x, int y, OrganismManager *organismManager);

  void Collision(Organism *defender, Organism *assulter) override;

  bool IsAbilityOnCD() const;

  void DecreasCooldown();

  void Render() override;
};


#endif //MIVOS_HUMAN_H
