#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<vector<int>> &matrix, int k) {
  int row = matrix.size();
  int col = matrix[0].size();
  int start = 0;
  int end = row * col - 1;
  int mid = start + (end - start) / 2;
  while (start < end) {
    int element = matrix[mid / col][mid % col];
    if (element == k) {
      return 1;
    }
    if (element < k) {
      start = mid + 1;
    }
    if (element > k) {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return 0;
}

int main() {
  int k;
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << "\n"
       << "Enter the Element to Search :\t";
  cin >> k;
  if (BinarySearch(matrix, k) == 1) {
    cout << "\n----------------------- \n";
    cout << "Number Found in Matrix \n";
    cout << "----------------------- \n";
  } else {
    cout << "----------------------- \n";
    cout << "Number Not Found\n";
    cout << "----------------------- \n";
  }
}