#include <iostream>

int get_val_from_user() {
  std::cout << "Enter an integer: ";
  int inp{};
  std::cin >> inp;

  return inp;
}

void prt_double(int num) {
  std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main() {
  int num{get_val_from_user()};
  prt_double(num);

  return 0;
}
