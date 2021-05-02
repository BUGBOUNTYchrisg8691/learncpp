#include <iostream>

using namespace std;

int main() {
  cout << "Input a keyboard character: ";

  char ch{};
  cin >> ch;
  cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';

  return 0;
}
