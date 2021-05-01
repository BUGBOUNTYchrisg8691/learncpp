#include <iostream>

using namespace std;

int main() {
  cout << "Enter an integer: ";
  int x{};
  cin >> x;

  if (x > 0)
    cout << "The value is positive\n";
  else if (x < 0)
    cout << "The value is negative\n";
  else
    cout << "The value is zero\n";

  return 0;
}
