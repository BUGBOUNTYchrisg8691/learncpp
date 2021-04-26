#include <iostream>

/* this is a using directive telling the compiler to check
 * the std namespace when resolving identifiers with no
 * prefix
 */
using namespace std;

int main() {
  /* cout has no prefix, so the compiler will check to see
   * if cout is defined locally or in namespace std
   */
  cout << "Hello, World!";

  return 0;
}
