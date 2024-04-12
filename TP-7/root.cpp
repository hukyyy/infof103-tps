#include <cstdlib>
#include <iostream>
bool almostEqual(float, float, const float);
float squareRoot(float, const float);

int main() {
  const float EPSILON = 0.01;
  float a;
  std::cout << "Enter the value you want rooted: ";
  std::cin >> a;
  std::cout << squareRoot(a, EPSILON) << std::endl;
  return 0;
}

bool almostEqual(float x, float y, const float EPSILON) {
  return abs(y - x) < EPSILON;
}

float squareRoot(float a, const float EPSILON) {
  float x = 0.0, y = 1.0;
  while (not almostEqual(x, y, EPSILON)) {
    x = y;
    y = (y + a / y) / 2;
  }
  return y;
}