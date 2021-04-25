#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";

  int usr_inp_int{ 0 };
  std::cin >> usr_inp_int;

  std::cout << "Double " << usr_inp_int << " is: " << usr_inp_int * 2 << '\n';
  std::cout << "Triple " << usr_inp_int << " is: " << usr_inp_int * 3 << '\n';

  return 0;
}
