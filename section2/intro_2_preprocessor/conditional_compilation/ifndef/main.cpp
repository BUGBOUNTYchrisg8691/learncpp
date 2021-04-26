#include <iostream>

int main() {
/* #ifndef PRINT_BOB           // same thing */
#if !defined(PRINT_BOB)     // same thing
  std::cout << "Bob\n";
#endif

  return 0;
}
