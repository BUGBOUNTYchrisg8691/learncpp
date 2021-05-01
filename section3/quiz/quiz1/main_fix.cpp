#include <iostream>

int read_number() {
  std::cout << "Please enter a number: ";
  int x{};
  std::cin >> x;

  return x;
}

void write_answer(int x) { std::cout << "The sum is: " << x; }

int main() {
  int x{read_number()};
  x = x + read_number();
  write_answer(x);

  return 0;
}
