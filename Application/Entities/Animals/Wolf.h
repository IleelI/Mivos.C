//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_WOLF_H
#define MIVOS_WOLF_H
#include "Animals.h"

class Wolf : public Animals {
protected:
  void Action() override;
  void MakeMove() override;
  void Collision() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Wolf(int x, int y, OrganismManager* organismManager);
  void Render() override;
};


#endif //MIVOS_WOLF_H