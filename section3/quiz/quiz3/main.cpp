#include <iostream>

void d() {
  // what is call stack here
  // d
  // b
  // a
  // main
}

void c() {}

void b() {
  c();
  d();
}

void a() { b(); }

int main() {
  a();

  return 0;
}
