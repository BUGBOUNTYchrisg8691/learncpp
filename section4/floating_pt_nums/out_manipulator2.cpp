#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // f has 10 significant digits
  float f{123456789.0f};

  // to show 9 digits in f
  cout << setprecision(9);
  cout << f << '\n';

  return 0;
}
