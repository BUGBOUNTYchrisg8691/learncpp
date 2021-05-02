#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Enter your full name: ";
  string name{};
  getline(cin >> ws, name);

  cout << "Enter your age: ";
  int age{};
  cin >> age;

  int name_len{static_cast<int>(name.length())};
  double yrs_per_char{static_cast<double>(age) / name_len};
  cout << "You've lived " << yrs_per_char << " years for each letter in your name.\n";

  return 0;
}
