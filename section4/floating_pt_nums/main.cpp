#include <iostream>

using namespace std;

int main() {
  // cout will not print fractional part if 0
  cout << 5.0 << '\n';
  // still will not print fractional part if 0
  cout << 5.0f << '\n';
  cout << 6.7f << '\n';
  cout << 9876543.21 << '\n';

  return 0;
}
