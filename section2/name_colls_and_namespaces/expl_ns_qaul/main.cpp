#include <iostream>

int main() {
  /* `::` symbol is an operator called `scope resolution op`
   * namespace is the identifier to the left of `::` and to
   * the right is the name that is contained within that
   * namespace. If no identifier is to the left of the `::`
   * operator, then the global namespace is assumed. Best Practice:
   * Use explicit namespace prefixes to access identifiers defined
   * in a namespace.
   */
  std::cout << "Hello, World!";

  return 0;
}
