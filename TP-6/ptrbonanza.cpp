double f1(int *i) { return double(*i); }

int main() {
  int x = 1, y = 2, z = 3;

  // ~1~
  int *const t[] = {&x, &y, &z};

  // ~2~
  int *const cp = t[2];
  int *const *p = &cp;

  // ~3~
  double (*f)(int *) = &f1;
}