//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_GRASS_H
#define MIVOS_GRASS_H
#include "Plants.h"

class Grass : public Plants {
protected:
  void MakeMove() override;
  void Action() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Grass(int x, int y, OrganismManager* organismManager);
  void Collision(Organism *defender, Organism *assulter) override;
  void Render() override;
  ~Grass() override = default;
};


#endif //MIVOS_GRASS_H
