#include <iostream>

int read_num() {
  std::cout << "Please enter a number: ";
  int x{};
  std::cin >> x;

  return x;
}

void write_ans(int x) {
  std::cout << "The quotient is: " << x;
}

int main() {
  int x{};
  int y{};
  x = read_num();
  y = read_num();
  write_ans(x/y);

  return 0;
}
