#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Pick 1 or 2: ";
  int choice{};
  cin >> choice;

  cout << "Now enter your name: ";
  string name{};
  getline(cin, name);

  cout << "Hello, " << name << ", you picked " << choice << '\n';

  return 0;
}
