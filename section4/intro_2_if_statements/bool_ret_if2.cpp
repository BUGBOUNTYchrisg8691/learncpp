#include <iostream>

using namespace std;

bool is_eq(int x, int y) { return (x == y); }

int main() {
  cout << "Enter an integer: ";
  int x{};
  cin >> x;

  cout << "Enter another integer: ";
  int y{};
  cin >> y;

  if (is_eq(x, y))
    cout << x << " and " << y << " are equal\n";
  else
    cout << x << " and " << y << " are not equal\n";

  return 0;
}
