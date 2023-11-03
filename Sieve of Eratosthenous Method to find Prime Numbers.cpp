#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cout<<"Enter The Number :\n";
	cin>>n;
	int count=0;
	vector<bool> a(n+1, true);
	a[0] = a[1] = false;
	for(int i=2;i<n;i++){
		if(a[i]){
			count++;
			for(int j=2*i;j<n;j=j+i){
				a[j] = 0;
			}
		}
	}
	
	cout<<"\nThe Prime Number Count is : \n"<<count;
	return 0;
	}
