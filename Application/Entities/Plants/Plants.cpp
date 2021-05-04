#include <iostream>
#include "Plants.h"
#include "../../consts&enums.h"
#include "../OrganismManager.h"

Plants::Plants(int pow, int x, int y, OrganismManager *organismManager)
: Organism(pow,0,x,y,organismManager) {
  symbol = "p";
  name = "Plant(ABSTRACT!!!)";
}
std::string Plants::GetTypeToString() {
  return name;
}
Plants::~Plants() {
  symbol = name = "";
}




