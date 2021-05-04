//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_PINEBORSCHT_H
#define MIVOS_PINEBORSCHT_H
#include "Plants.h"


class Pineborscht : public Plants {
protected:
  void MakeMove() override;
  void Action() override;
  void Collision() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Pineborscht(int x, int y, OrganismManager* organismManager);
  void Render() override;
  ~Pineborscht() override = default;
};



#endif //MIVOS_PINEBORSCHT_H
