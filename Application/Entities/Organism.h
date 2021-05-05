#ifndef MIVOS_ORGANISM_H
#define MIVOS_ORGANISM_H

#include <string>

class OrganismManager;
class Organism {
protected:
  int power;
  int initiative;
  int lifeLength;
  int xPos;
  int yPos;
  bool hasDied;
  OrganismManager* manager;
  friend OrganismManager;
  int GetMove() const;
  int GetFreePosition() const;
  int GetColliderXPos(int moveDirection) const;
  int GetColliderYPos(int moveDirection) const;
  bool CheckMapBounds(int moveDirection) const;
  bool CheckForCollision(int moveDirection) const;
  static int GenerateDirection();
  static bool CheckForReproduce();
  virtual void Action() = 0;
  virtual void MakeMove() = 0;
  virtual void CreateTypedOrganism(int xPos, int yPos, OrganismManager* manager) = 0;
  virtual void Reproduce();
public:
  Organism(int pow, int init, int x, int y, OrganismManager* organismManager);
  int GetPower() const;
  int GetInitiative() const;
  int GetLifeLength() const;
  int GetXPos() const;
  int GetYPos() const;
  void SetDeath(bool state);
  void SetPower(int newPower);
  virtual void Collision(Organism *defender, Organism *assulter) = 0;
  virtual std::string GetTypeToString() = 0;
  virtual void Render() = 0;
  virtual ~Organism();
};


#endif
