#include <iostream>

int binarySearch(int arr[], int n, int k) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  while (s <= n) {
    if (arr[mid] == k) {
      return mid;
    }
    if (arr[mid] <= k) {
      s = mid + 1;
    }
    if (arr[mid] >= k) {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}
int main() {
  int k;
  int arr[4] = {2, 5, 8, 10};
  std::cout << "Enter the element to search: ";
  std::cin >> k;
  std::cout << "The Number found at index : " << binarySearch(arr, 4, k);
}
