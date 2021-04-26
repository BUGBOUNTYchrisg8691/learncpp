#include "io.h"
#include <iostream>

int read_int() {
  std::cout << "Enter an integer: ";

  int x{};
  std::cin >> x;

  return x;
}

void write_int(int integer) { std::cout << integer << '\n'; }
