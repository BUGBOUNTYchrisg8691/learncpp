#include <iostream>

#define PRINT_JOE

int main() {
/* #ifdef PRINT_JOE               // same thing */
#if defined (PRINT_JOE)        // same thing
  std::cout << "Joe\n"; // if PRINT_JOE defined, compile this code
#endif

/* #ifdef PRINT_BOB               // same thing */
#if defined (PRINT_BOB)        // same thing
  std::cout << "Bob\n"; // if PRINT_BOB defined, compile this code
#endif

  return 0;
}
