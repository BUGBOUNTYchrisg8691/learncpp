#include <iostream>

int get_val_from_user() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

int main() {
  int num = get_val_from_user();
  std::cout << num << " doubled is: " << num * 2 << '\n';

  return 0;
}
