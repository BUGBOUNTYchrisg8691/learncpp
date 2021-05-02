#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  cout << "Enter your full name: ";
  string name{};
  getline(cin >> ws, name);

  cout << "Enter your age: ";
  string age{};
  getline(cin >> ws, age);

  cout << "Your name is " << name << " and your age is " << age << '\n';

  return 0;
}
