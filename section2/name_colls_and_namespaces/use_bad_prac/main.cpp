#include <iostream>

// WILL NOT COMPILE
using namespace std;

int cout() { return 5; }

int main() {
  /* Compile error!  Which cout do we want here?  The one
   * in the std namespace or the one we defined above?
   */
  cout << "Hello, World!";

  return 0;
}
