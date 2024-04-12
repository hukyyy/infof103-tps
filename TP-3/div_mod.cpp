#include <iostream>

int myDiv(int x, int y) { return x / y; }

int myMod(int x, int y) { return x % y; }

int main() {
  int a, b, c;
  std::cout << "Enter a value for the dividend a:" << std::endl;
  std::cin >> a;
  std::cout << "Enter a value for the dividend b:" << std::endl;
  std::cin >> b;
  std::cout << "Enter a value for the divisor c:" << std::endl;
  std::cin >> c;
  std::cout << "The result is: " << myDiv(a, myMod(b, c)) << std::endl;
  return 0;
}
