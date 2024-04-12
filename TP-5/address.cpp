#include <iostream>

int main() {
  int a;
  int *ptr = &a;
  std::cin >> a;
  std::cout << ptr << std::endl;
}