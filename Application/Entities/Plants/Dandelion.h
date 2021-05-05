//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_DANDELION_H
#define MIVOS_DANDELION_H
#include "Plants.h"

class Dandelion : public Plants {
protected:
  void MakeTurn() override;
  void Reproduce() override;
  void Action() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Dandelion(int x, int y, OrganismManager* organismManager);
  void Collision(Organism *defender, Organism *assulter) override;
  void Render() override;
  ~Dandelion() override = default;
};


#endif //MIVOS_DANDELION_H
