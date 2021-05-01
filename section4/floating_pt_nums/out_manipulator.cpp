#include <iomanip> // for output manipulator std::set
#include <iostream>

using namespace std;

int main() {
  // show 16 digits of precision
  cout << setprecision(16);
  // f suffix means float
  cout << 3.33333333333333333333333333333333333333f << '\n';
  // no suffix means double
  cout << 3.33333333333333333333333333333333333333 << '\n';

  return 0;
}
