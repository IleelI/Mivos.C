//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_SHEEP_H
#define MIVOS_SHEEP_H
#include "Animals.h"

class Sheep : public Animals {
protected:
  void Action() override;
  void MakeMove() override;
  void Collision() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Sheep(int x, int y, OrganismManager* organismManager);
  void Render() override;
};


#endif //MIVOS_SHEEP_H
