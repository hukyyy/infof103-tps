#include <iostream>

void whileFibonacci(int upTo) {
  int counter = 2;
  int a = 1;
  int b = 1;
  std::cout << a << " ";
  std::cout << b << " ";
  while (counter < upTo) {
    int temp = a;
    a = b;
    b = temp + b;
    std::cout << b << " ";
    counter++;
  }
  std::cout << std::endl;
}

void doWhileFibonacci(int upTo) {
  int counter = 1;
  int a = 1;
  int b = 1;
  std::cout << a << " ";
  do {
    std::cout << b << " ";
    int temp = a;
    a = b;
    b = temp + b;
    counter++;
  } while (counter < upTo);
  std::cout << std::endl;
}

void forFibonacci(int upTo) {
  int a = 1;
  int b = 1;
  std::cout << a << " ";
  std::cout << b << " ";
  for (int counter = 2; counter < upTo; counter++) {
    int temp = a;
    a = b;
    b = temp + b;
    std::cout << b << " ";
  }
  std::cout << std::endl;
}

int main() {
  whileFibonacci(16);
  doWhileFibonacci(16);
  forFibonacci(16);
  return 0;
}