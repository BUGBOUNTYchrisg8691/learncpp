#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Enter your full name: ";
  string name{};
  cin >> name;

  cout << "Enter your age: ";
  string age{};
  cin >> age;

  cout << "Your name is " << name << " and your age is " << age << '\n';

  return 0;
}
