//
// Created by Bartosz Elert on 05/05/2021.
//
#ifndef MIVOS_APP_H
#define MIVOS_APP_H
#include "Entities/OrganismManager.h"
#include "Console/Console.h"

class App {
private:
  OrganismManager* manager;
  Console* interface;
public:
  App();
  void Simulation();
  ~App();
};


#endif //MIVOS_APP_H
