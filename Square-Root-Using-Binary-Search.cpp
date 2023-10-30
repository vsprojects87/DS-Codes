#include <iostream>

int sqrtInteger(int n) {
  int s = 0;
  int e = n;
  long long int mid = s + (e - s) / 2;
  long long int ans = -1;
  while (s <= e) {
    long long int square = mid * mid;
    if (square == n) {
      return mid;
    }
    if (square < n) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

double mostPrecision(int n, int Precision, int tempSol) {
  double factor = 1;
  double ans = tempSol;
  for (int i = 0; i < Precision; i++) {
    factor = factor / 10;
    for (double j = ans; j * j < n; j = j + factor) {
      ans = j;
    }
  }
  return ans;
}

int main() {
  int k;
  std::cout << "Enter Square root to search: ";
  std::cin >> k;
  int tempSol = sqrtInteger(k);
  std::cout << "The Square root is " << mostPrecision(k, 3, tempSol);
}