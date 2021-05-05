#ifndef MIVOS_PLANTS_H
#define MIVOS_PLANTS_H
#define DANDELION_REPRODUCE_ATTEMPS 3
#include <string>
#include "../Organism.h"

class Plants : public Organism{
protected:
  std::string symbol;
  std::string name;
  void Action() override = 0;
  void MakeTurn() override = 0;
  std::string GetTypeToString() override;
  void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) override = 0;
public:
  Plants(int pow, int x, int y, OrganismManager* organismManager);
  void Collision(Organism *defender, Organism *assulter) override = 0;
  void Render() override = 0;
  ~Plants() override;
};



#endif //MIVOS_PLANTS_H
