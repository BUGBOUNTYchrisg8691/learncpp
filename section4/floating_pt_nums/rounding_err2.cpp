#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  cout << setprecision(17);

  double d1{1.0};
  cout << d1 << '\n';

  double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
  cout << d2 << '\n';

  return 0;
}
