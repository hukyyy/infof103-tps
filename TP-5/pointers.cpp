#include <cstddef>
#include <iostream>

int main() {
  // POINTEURS
  int a;
  int *p = &a;
  int *pp1 = p + 1; // Shift du pointeur par 4 bytes (taille d'un `int`)
  int *pm1 = p - 1;
  std::ptrdiff_t diff1 = p - pm1, diff2 = pp1 - p;
  std::cout << sizeof(a) << std::endl; // 4
  std::cout << pm1 << " " << p << " " << pp1 << std::endl;
  std::cout << diff1 << ", " << diff2 << std::endl;

  // TABLEAUX
  int tab1[/*5 <- Taille du Tableau*/] = {2, 3, 5, 7, 11};
  int tab2[5] = {2, 1}; // == {2, 1, 0, 0, 0, 0}

  int t[] = {2, 3, 5, 7, 11};

  //    ...   |    2    |    3    |    5    |    7    |    11   |    ...
  //          ↑└---┬---┘↑          └---┬---┘          ↑
  //          | sizeof(int)       sizeof(int)         |
  //          | bytes   |            bytes            |
  //    valeur de t    adresse                     adresse
  // adresse de t[0]   de t[1]                     de t[4]

  // ALLOCATION DYNAMIQUE
  int n;
  std::cin >> n;
  int *ptr = new int[n + 1]; // Alloue un Tableau de n éléments
  for (int i = 0; i <= n; ++i) {
    ptr[i] = i;
  }
  delete[] ptr; // dé-alloue le tableau
  ptr = nullptr;

  return 0;
}