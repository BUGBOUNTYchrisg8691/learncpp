#include <cstdint>
#include <iostream>

using namespace std;

int main() {
  // fast
  cout << "fast 8:\t\t" << sizeof(int_fast8_t) * 8 << " bits\n";
  cout << "fast 16:\t" << sizeof(int_fast16_t) * 8 << " bits\n";
  cout << "fast 32:\t" << sizeof(int_fast32_t) * 8 << " bits\n";

  // least
  cout << "least 8:\t" << sizeof(int_least8_t) * 8 << " bits\n";
  cout << "least 16:\t" << sizeof(int_least16_t) * 8 << " bits\n";
  cout << "least 32:\t" << sizeof(int_least32_t) * 8 << " bits\n";

  return 0;
}
