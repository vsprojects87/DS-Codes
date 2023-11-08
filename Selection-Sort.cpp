#include <iostream>
void selectionSort(int a[],int n){
  for(int i=0;i<n;i++)
    {
      int minindex=i;
      for(int j=i+1;j<n;j++){
        if(a[j]<a[minindex])
          minindex=j;
      }
      std::swap(a[minindex],a[i]);
    }
  for(int i=0;i<n;i++){
    std::cout<<a[i]<<" ";
  }
}

int main() {
  int a[]={15,23,9,12,19};
  selectionSort(a,5);
}