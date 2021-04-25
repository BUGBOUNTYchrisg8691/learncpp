#include <iostream>

void do_print() { std::cout << "In do_print()\n"; }

int main() {
  std::cout << "Starting main()\n";
  do_print();
  std::cout << "Ending main()\n";

  return 0;
}
