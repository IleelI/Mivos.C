//
// Created by Bartosz Elert on 05/05/2021.
//

#include <iostream>
#include "Console.h"
#include "../consts&enums.h"

void Console::StartOfTurn(int turn) {
  std::cout << CLEAR_CONSOLE;
  std::cout << "----------------------------------" << NEWLINE_CONSOLE;
  std::cout << "Start of new turn. " << " Turn: " << turn << NEWLINE_CONSOLE;
}
void Console::EndOfTurn() {
  std::cout << "----------------------------------" << NEWLINE_CONSOLE;
  std::cout << "End of turn" << NEWLINE_CONSOLE;
  std::cout << "Press N to move to the next turn...";
  char command = '\0';
  while (command != 'n' && command != 'N')
    std::cin >> command;
}