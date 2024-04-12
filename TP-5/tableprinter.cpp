#include <iostream>
int main() {
  int tab[5] = {0, 1, 2, 3, 4};

  for (int i = 0; i < 10000; ++i) {
    std::cout << tab[i] << std::endl;
  }
}