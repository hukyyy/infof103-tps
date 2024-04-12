#include <iostream>
int main() {
  const int UPTO = 20;

  int fibonacci[UPTO] = {1, 1};
  for (int i = 2; i < UPTO; ++i) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  }

  for (int i = 0; i < UPTO; ++i) {
    std::cout << fibonacci[i] << " ";
  }
  std::cout << std::endl;
}