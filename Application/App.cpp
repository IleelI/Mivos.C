//
// Created by Bartosz Elert on 05/05/2021.
//

#include <iostream>
#include <unistd.h>
#include "App.h"

App::App() {
  manager = new OrganismManager();
  interface = new Console();
}

void App::Simulation() {
  manager->GenerateSimulation();
  while (true) {
    interface->StartOfTurn(manager->GetTurns());
    manager->Turn();
    interface->EndOfTurn();
  }
}

App::~App() {
  delete manager;
  delete interface;
  manager = nullptr;
  interface = nullptr;
}