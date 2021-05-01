#include <iostream>

int main() {
  // largest 16-bit unsigned val possible
  unsigned short x{65535};
  std::cout << "x was: " << x << '\n';

  // 65536 is out of our range, so we get wrap-around
  x = 65536;
  std::cout << "x is now: " << x << '\n';

  // 65537 is out of our range, so we get wrap-around
  x = 65537;
  std::cout << "x is now: " << x << '\n';

  return 0;
}
