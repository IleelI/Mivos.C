//
// Created by Bartosz Elert on 04/05/2021.
//

#ifndef MIVOS_GUARANA_H
#define MIVOS_GUARANA_H
#include "Plants.h"

class Guarana : public Plants {
protected:
  void MakeMove() override;
  void Action() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override;
public:
  Guarana(int x, int y, OrganismManager* organismManager);
  void Collision(Organism *defender, Organism *assulter) override;
  void Render() override;
  ~Guarana() override = default;
};


#endif //MIVOS_GUARANA_H
