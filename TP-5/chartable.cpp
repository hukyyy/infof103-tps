#include <iostream>

int main() {
  char tab[42];
  std::cin >> tab;

  std::cout << tab << std::endl;

  for (int i = 0; tab[i] != '\0'; ++i) {
    std::cout << tab[i];
  }
  std::cout << std::endl;

  char *ptr = tab;
  for (; *ptr != '\0'; ptr++) {
    std::cout << *ptr;
  }
  std::cout << std::endl;
}