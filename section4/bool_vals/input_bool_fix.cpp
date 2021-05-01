#include <iostream>

using namespace std;

int main() {
  bool b{};
  cout << "Enter a boolean value: ";
  cin >> boolalpha;
  cin >> b;
  cout << boolalpha;
  cout << "You entered: " << b << '\n';

  return 0;
}
