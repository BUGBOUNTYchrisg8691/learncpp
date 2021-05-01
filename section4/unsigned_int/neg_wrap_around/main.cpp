#include <iostream>

int main() {
  // smallest 2-byte unsigned value possible
  unsigned short x{0};
  std::cout << "x was: " << x << '\n';

  // -1 is out of range, so we get wrap-around
  x = -1;
  std::cout << "x is now: " << x << '\n';

  // -2 is out of range, so we get wrap-around
  x = -2;
  std::cout << "x is now: " << x << '\n';

  return 0;
}
