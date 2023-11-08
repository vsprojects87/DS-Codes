#include <iostream>
using namespace std;

/* My Logic

void reverseArr(int arr[], int n) {
  int start = 0;
  int next = 1;
  for (int i = 0; i < n; i++) {
    if (start <= start+1) {
      swap(arr[start], arr[next]);
      start+=2;
      next+=2;
    }
  }
}
*/
void printarray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {4, 2, 8, 9, 1, 0};

  reverseArr(arr, 6);

  printarray(arr, 6);

  return 0;
}
