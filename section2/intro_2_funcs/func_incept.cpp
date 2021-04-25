#include <iostream>

void do_b() { std::cout << "in do_b()\n"; }

void do_a() {
  std::cout << "starting do_a()\n";
  do_b();
  std::cout << "ending do_a()\n";
}

int main() {
  std::cout << "starting main()\n";
  do_a();
  std::cout << "ending main()\n";

  return 0;
}
