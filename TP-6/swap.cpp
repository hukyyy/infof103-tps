#include <iostream>
void ptrswap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void refswap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 1, b = 2, c = 3, d = 4;
  std::cout << a << " " << b << " " << c << " " << d << std::endl;

  ptrswap(&a, &b);
  refswap(c, d);

  std::cout << a << " " << b << " " << c << " " << d << std::endl;
}