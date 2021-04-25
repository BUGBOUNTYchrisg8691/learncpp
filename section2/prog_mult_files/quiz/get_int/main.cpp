#include <iostream>

int get_int();
int add(int x, int y);

int main() {
  int x{get_int()};
  int y{get_int()};

  std::cout << x << " + " << y << " is " << add(x, y) << '\n';

  return 0;
}
