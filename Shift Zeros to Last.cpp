#include<iostream>
using namespace std;

// replace all zeros in array to last of the array

void shiftZero(int a[],int n){
	int nozero = 0;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			swap(a[i],a[nozero]);
			nozero++;
		}
	}
	for(int i=0; i<n; i++){
	cout<< a[i] << " ";
	}
	
}

int main()
{
	int a[5]={2,0,0,3,5};
	shiftZero(a,5);
	return 0;
}
