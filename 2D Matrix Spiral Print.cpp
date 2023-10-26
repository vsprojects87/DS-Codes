#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printSpiral(vector<vector<int>> &matrix) {
  int row = matrix.size();
  int col = matrix[0].size();
  int total = row * col;
  int count = 0;
  int left = 0, top = 0, right = col - 1, bottom = row - 1;

  while (count < total) {
    for (int i = left; count < total && i <= right; i++) {
      cout << matrix[top][i] << " ";
      count++;
    }
    top++;

    for (int i = top; count < total && i <= bottom; i++) {
      cout << matrix[i][right] << " ";
      count++;
    }
    right--;

    for (int i = right; count < total && i >= left; i--) {
      cout << matrix[bottom][i] << " ";
      count++;
    }
    bottom--;

    for (int i = bottom; count < total && i >= top; i--) {
      cout << matrix[i][left] << " ";
      count++;
    }
    left++;
  }
}

int main() {
  vector<vector<int>> matrix = {
      {1, 2, 3, 3}, {4, 5, 6, 6}, {7, 8, 9, 9}, {10, 11, 12, 13}};
  std::cout << "Spiral Order Traversal: ";
  printSpiral(matrix);
  return 0;
}