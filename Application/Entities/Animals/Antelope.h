//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_ANTELOPE_H
#define MIVOS_ANTELOPE_H
#include "Animals.h"

class Antelope : public Animals {
protected:
  void Action() override;
  void MakeMove() override;
  void Collision() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Antelope(int x, int y, OrganismManager* organismManager);
  void Render() override;
};


#endif //MIVOS_ANTELOPE_H
