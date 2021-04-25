#include <iostream>

int get_int() {
  std::cout << "Enter an integer: ";

  int x{};
  std::cin >> x;

  return x;
}
