#include "q_one.h"
#include <iostream>

using namespace std;

int main() {
  cout << "Enter a single digit number: ";
  int x{};
  cin >> x;

  if (check_prime(x))
    cout << "The number is prime\n";
  else
    cout << "The number is not prime\n";

  return 0;
}

/* bool check_prime(int x) { return (x == 2 or x == 3 or x == 5 or x == 7); } */
bool check_prime(int x) { return (x == 2 || x == 3 || x == 5 || x == 7); }
