#include <iostream>

void insertionSort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int temp = a[i];
    int j = i - 1;
    while (j >= 0) {
      if (a[j] > temp) {
        a[j + 1] = a[j];
      } else {
        break;
      }
      j--;
    }
    a[j+1] = temp;
  }
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << " ";
  }
}

int main() {
  int a[5] = {10, 23, 1, 21, 9};
  insertionSort(a, 5);
}