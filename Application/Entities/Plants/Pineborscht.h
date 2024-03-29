//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_PINEBORSCHT_H
#define MIVOS_PINEBORSCHT_H
#include "Plants.h"


class Pineborscht : public Plants {
protected:
  void MakeTurn() override;
  void Action() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Pineborscht(int x, int y, OrganismManager* organismManager);
  void Collision(Organism *defender, Organism *assulter) override;
  void Render() override;
  ~Pineborscht() override = default;
};



#endif //MIVOS_PINEBORSCHT_H
