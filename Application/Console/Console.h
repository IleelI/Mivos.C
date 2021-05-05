//
// Created by Bartosz Elert on 05/05/2021.
//

#ifndef MIVOS_CONSOLE_H
#define MIVOS_CONSOLE_H


class Console {
public:
  Console() = default;
  static void StartOfTurn(int turn);
  static void EndOfTurn();
  ~Console() = default;
};


#endif //MIVOS_CONSOLE_H
