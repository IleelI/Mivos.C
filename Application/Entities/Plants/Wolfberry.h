//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_WOLFBERRY_H
#define MIVOS_WOLFBERRY_H
#include "Plants.h"

class Wolfberry : public Plants {
protected:
  void MakeMove() override;
  void Action() override;
  void Collision() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Wolfberry(int x, int y, OrganismManager* organismManager);
  void Render() override;
  ~Wolfberry() override = default;
};


#endif //MIVOS_WOLFBERRY_H
