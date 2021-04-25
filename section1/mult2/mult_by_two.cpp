#include <iostream>

int main() {
  std::cout << "Enter a number: ";

  int x{0};
  std::cin >> x;

  std::cout << "Your num " << x << " times 2 = " << x * 2;

  return 0;
}
