#include <iostream>

using namespace std;

int main() {
  char ch{'a'};

  cout << ch << '\n';
  cout << static_cast<int>(ch) << '\n';
  cout << ch << '\n';

  return 0;
}
