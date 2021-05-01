#include <iostream>

using namespace std;

int main() {
  cout << "Enter an integer: ";
  int x{};
  cin >> x;

  bool zero{(x == 0)};

  if (zero)
    cout << "The value is zero\n";
  if (!zero)
    cout << "The value is non-zero\n";

  return 0;
}
