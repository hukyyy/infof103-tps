#include <iostream>

int main() {
  int count = 0;
  int n;
  std::cout << "Enter a positive integer:" << std::endl;
  std::cin >> n;
  while (n != 1) {
    std::cout << n << " ";
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
    count++;
    std::cout << n << std::endl;
  }
  std::cout << count << " iterations" << std::endl;
}