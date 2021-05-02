#include <iomanip>  // Why don't I need this?
#include <iostream> // But I do need this.
#include <string>   // or don't need this?

using namespace std;

int main() {
  cout << "Pick 1 or 2: ";
  int choice{};
  cin >> choice;

  cout << "Now enter your name: ";
  string name{};
  getline(cin >> ws, name);

  cout << "Hello, " << name << ", you picked " << choice << '\n';

  return 0;
}
