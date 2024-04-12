#include <iostream>

int main(int argc, char *argv[]) {
  int a = std::atoi(argv[1]);
  int b = std::atoi(argv[2]);
  int c = std::atoi(argv[3]);

  if (a >= b) {
    if (b >= c) {
      std::cout << c << " " << b << " " << a << std::endl;
    } else {
      if (a >= c) {
        std::cout << b << " " << c << " " << a << std::endl;
      } else {
        std::cout << b << " " << a << " " << c << std::endl;
      }
    }
  } else {
    if (a >= c) {
      std::cout << c << " " << a << " " << b << std::endl;
    } else {
      if (b >= c) {
        std::cout << a << " " << c << " " << b << std::endl;
      } else {
        std::cout << a << " " << b << " " << c << std::endl;
      }
    }
  }
  return 0;
}