#include "fctAdd.hpp"
#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter a value for a: ";
  std::cin >> a;
  std::cout << "Enter a value for b: ";
  std::cin >> b;

  int sum = fctAdd(a, b);

  std::cout << "The sum of a and b is: " << sum << std::endl;
}