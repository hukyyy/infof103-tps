#include <iostream>

int main() {
  char c;
  std::cout << "Enter a lowercase letter (a-e):" << std::endl;
  std::cin >> c;
  switch (c) {
  case 'a':
    std::cout << "Anna" << std::endl;
    break;
  case 'b':
    std::cout << "Bob" << std::endl;
    break;
  case 'c':
    std::cout << "Christian" << std::endl;
    break;
  case 'd':
    std::cout << "Dany" << std::endl;
    break;
  case 'e':
    std::cout << "Eleanor" << std::endl;
    break;
  default:
    std::cout << "ERROR: Please enter a valid lowercase letter (a-e)"
              << std::endl;
  }
  return 0;
}