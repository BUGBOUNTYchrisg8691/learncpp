#include <iostream>

int get_val_from_user() {
  int val{};
  std::cout << "Enter an integer: ";
  std::cin >> val;

  return val;
}

void print_double(int value) {
  std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main() {
  print_double(get_val_from_user());

  return 0;
}
