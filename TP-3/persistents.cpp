#include <iostream>

int f1(int x) {
  static int x1 = x;
  x1--;
  std::cout << "f1: " << x1 << std::endl;
  return x1;
}

int f2() {
  int x1 = 0;
  x1++;
  std::cout << "f2: " << x1 << std::endl;
  return x1;
}

int main() {
  f1(3);
  int x2 = f1(f2());
  std::cout << x2 << std::endl;
  return 0;
}