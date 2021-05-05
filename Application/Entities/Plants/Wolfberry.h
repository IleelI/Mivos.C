//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_WOLFBERRY_H
#define MIVOS_WOLFBERRY_H

#include "Plants.h"

class Wolfberry : public Plants {
protected:
  void MakeTurn() override;

  void Action() override;

  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;

public:
  Wolfberry(int x, int y, OrganismManager *organismManager);

  void Collision(Organism *defender, Organism *assulter) override;

  void Render() override;

  ~Wolfberry() override = default;
};


#endif //MIVOS_WOLFBERRY_H
