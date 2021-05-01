#include <iostream>

using namespace std;

int main() {
  cout << "Enter an integer: ";
  int x{};
  cin >> x;

  if (x == 0)
    cout << "The value is zero\n";
  else
    cout << "The value is non-zero\n";

  cout << "Enter another integer: ";
  int y{};
  cin >> y;

  bool zero{(y == 0)};

  if (zero)
    cout << "The value is zero\n";
  else
    cout << "The value is non-zero\n";

  return 0;
}
