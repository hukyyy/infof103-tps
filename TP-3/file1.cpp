#include <iostream>
using namespace std;

int x;

int func1() {
  int c = 0;
  c++;
  return c;
}

int func2() {
  static int c = 0;
  c++;
  return c;
}

int main() {
  x = 3;
  cout << func2() << endl;
  cout << func2() << endl;
  cout << func1() << endl;
  cout << func1() << endl;
  return 0;
}