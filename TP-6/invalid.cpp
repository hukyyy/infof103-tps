int main() {
  int i = 10;
  int *p;
  const int j = 20;
  i = j + 2;
  p = &i;
  j++;        // ERR: Mutating a `const`
  int &k;     // ERR: Reference HAS to reference something
  int &l = j; // ERR: Type mismatch, should be `const int`
  int &m = i;
  ++m;
  const int *q = &i;
  int n[] = {1, 2, 12, 212, 12212, 21212212};
  int *o[] = {&i, &k, &l}; // Type of array is pointer `int*`
  o[2] = 15;               // ERR: assigning value to address. *o[2] = 15
  *&i = 28;
  *&*p = 30;
  *(n + 3) = 13; // Changes n[4] to 13
  int *const s;  // ERR: const pointer has to be initialised as it's immutable
  int *const r = &i; // Constant pointer to int i
  r = p;             // ERR: Can't assign to r as it's constant
  const int &z = j;
}