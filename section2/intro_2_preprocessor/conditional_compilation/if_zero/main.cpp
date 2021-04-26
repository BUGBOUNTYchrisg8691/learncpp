#include <iostream>

int main() {
  std::cout << "Joe\n";

/* Don't compile anything starting here */
#if 0

  std::cout << "Bob\n";

  std::cout << "Steve\n";

#endif

  return 0;
}
