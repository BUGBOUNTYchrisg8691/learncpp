#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double d{0.1};
  cout << d << '\n';

  cout << setprecision(17);
  cout << d << '\n';

  return 0;
}
