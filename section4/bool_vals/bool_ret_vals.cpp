#include <iostream>

using namespace std;

bool is_equal(int x, int y) { return (x == y); }

int main() {
  cout << "Enter an integer: ";
  int x{};
  cin >> x;

  cout << "Enter another integer: ";
  int y{};
  cin >> y;

  cout << boolalpha;

  cout << x << " and " << y << " are equal? ";
  cout << is_equal(x, y);

  return 0;
}
