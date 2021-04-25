#include <iostream>

int main() {
  int x{};
  std::cout << "Enter a number: ";
  std::cin >> x;

  int y{};
  std::cout << "Enter another number: ";
  std::cin >> y;

  std::cout << x << " + " << y << " is " << x + y << '\n';
  std::cout << x << " - " << y << " is " << x - y << '\n';

  return 0;
}
