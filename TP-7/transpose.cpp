#include <iomanip>
#include <iostream>

void printMatrix(int matrix[4][4]) {
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      std::cout << std::setfill('0') << std::setw(2) << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void transposeMatrix(int matrix[4][4]) {
  for (int i = 0; i < 4; ++i) {
    for (int j = i; j < 4; ++j) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
}

int main() {
  int matrix[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  printMatrix(matrix);
  transposeMatrix(matrix);
  printMatrix(matrix);
  return 0;
}