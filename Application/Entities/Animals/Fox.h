//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_FOX_H
#define MIVOS_FOX_H

#include "Animals.h"

class Fox : public Animals {
protected:
  void Action() override;

  void Move() override;

  void MakeTurn() override;

  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;

public:
  Fox(int x, int y, OrganismManager *organismManager);

  void Collision(Organism *defender, Organism *assulter) override;

  void Render() override;
};


#endif //MIVOS_FOX_H
