
// bubble sort in reverse method opposite logic to bubble sort

#include <iostream>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j >= i; j--) {
      if (arr[j] < arr[j - 1]) {
        std::swap(arr[j - 1], arr[j]);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

int main() {
  int arr[5] = {6, 2, 8, 4, 10};
  bubbleSort(arr, 5);
}

/* alternate solution
#include <bits/stdc++.h>
void bubbleSort(vector <int>& arr, int n)
{
    for(int i=n-1;i>0;i--)

    {

        for(int j=0;j<i;j++)

        {

            if(arr[j]>arr[j+1])

            {

                swap(arr[j], arr[j+1]);
            }
        }
    }
}
*/