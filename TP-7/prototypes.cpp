#include <iostream>
bool aGreaterThanb(int, int); // PROTOTYPE

int main() {
  int a, b;
  std::cout << "Enter value of a: ";
  std::cin >> a;
  std::cout << "Enter value of b: ";
  std::cin >> b;
  if (aGreaterThanb(a, b)) {
    std::cout << "a is greater than b!" << std::endl;
  } else {
    std::cout << "a is not greater than b!" << std::endl;
  }
  return 0;
}

bool aGreaterThanb(int a, int b) { return a > b; }