#ifndef MIVOS_CONSTS_ENUMS_H
#define MIVOS_CONSTS_ENUMS_H
#define CLEAR_CONSOLE "\033[2J\033[1;1H"
#define NEWLINE_CONSOLE "\n\r"
#define MAP_SIZE 10
enum moveDirections {
  UP = 1,
  DOWN,
  LEFT,
  RIGHT,
  STAY
};
enum organisms {
  WOLF,
  SHEEP,
  FOX,
  TURTLE,
  ANTELOPE,
  GRASS,
  DANDELION,
  GUARANA,
  WOLFBERRY,
  PINEBORSCHT
};

#endif
