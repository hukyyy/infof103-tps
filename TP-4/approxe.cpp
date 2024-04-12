#include <iostream>

int factorial(int of) {
  if (of == 0) {
    return 1;
  }
  int res = 1;
  for (int i = of; i > 0; i--) {
    res *= i;
  }
  return res;
}

float approximateE(const float error) {
  float res = 0;
  int n = 0;
  while (2.0 / float(factorial(n + 1)) > error) {
    res += 1.0 / float(factorial(n));
    n++;
  }
  return res;
}

int main() {
  std::cout << approximateE(0.000001) << std::endl;
  return 0;
}