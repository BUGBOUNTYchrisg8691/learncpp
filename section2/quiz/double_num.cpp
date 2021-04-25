#include <iostream>

int double_num(int num) { return num * 2; }

int main() {
  int inp_val{};
  std::cout << "Enter an integer: ";
  std::cin >> inp_val;

  std::cout << double_num(inp_val);

  return 0;
}
