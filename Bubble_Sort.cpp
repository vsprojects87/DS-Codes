#include <iostream>

void bubbleSort(int a[], int n) {
  // i for numbers of rounds
  for (int i = 1; i < n; i++) {
    bool swapped = false;
    // j will manipulate the numbers
    for (int j = 0; j < n - i; j++) {
      // if a[j]=10 > a[j+1]=1
      if (a[j] > a[j + 1]) {
        std::swap(a[j], a[j + 1]);
        // if values get swapped then swapped will remain true
        // otherwise will be false and exit loop
        swapped = true;
      }
    }
    if (swapped == false)
      break;
  }
  // print the sorted array
  std::cout << "The Bubble Sort : ";
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << " ";
  }
}
int main() {
  int a[6] = {10, 1, 7, 6, 14, 9};
  bubbleSort(a, 6);
}
