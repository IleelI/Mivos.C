//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_TURTLE_H
#define MIVOS_TURTLE_H
#include "Animals.h"

class Turtle : public Animals {
protected:
  void Action() override;
  void MakeMove() override;
  void Collision() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Turtle(int x, int y, OrganismManager* organismManager);
  void Render() override;
};


#endif //MIVOS_TURTLE_H
