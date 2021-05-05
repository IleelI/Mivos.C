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
  OrganismManager *manager;
  friend OrganismManager;

  // Getters
  int GetMove() const;

  int GetFreePosition() const;

  int GetColliderXPos(int moveDirection) const;

  int GetColliderYPos(int moveDirection) const;

  static int GenerateDirection();

  // Checkers
  bool CheckMapBounds(int moveDirection) const;

  bool CheckForCollision(int moveDirection) const;

  static bool CheckForReproduce();

  // Organism Actions
  virtual void Reproduce();

  virtual void Action() = 0;

  virtual void MakeTurn() = 0;

  virtual void CreateTypedOrganism(int xPos, int yPos, OrganismManager *manager) = 0;

public:
  Organism(int pow, int init, int x, int y, OrganismManager *organismManager);

  // Getters
  int GetXPos() const;

  int GetYPos() const;

  int GetPower() const;

  int GetInitiative() const;

  int GetLifeLength() const;

  virtual std::string GetTypeToString() = 0;

  // Setters
  void SetDeath(bool state);

  void SetPower(int newPower);

  void SetXPos(int x);

  void SetYPos(int y);

  // Organism Action
  virtual void Collision(Organism *defender, Organism *assulter) = 0;

  // Loggers
  virtual void Render() = 0;

  virtual ~Organism();
};


#endif
