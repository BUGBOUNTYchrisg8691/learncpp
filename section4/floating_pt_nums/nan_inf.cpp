#include <iostream>

using namespace std;

int main() {
  double zero{0.0};
  // positive infinity
  double posinf{5.0 / zero};
  cout << posinf << '\n';

  double neginf{-5.0 / zero};
  cout << neginf << '\n';

  double nan{zero / zero};
  cout << nan << '\n';

  return 0;
}
