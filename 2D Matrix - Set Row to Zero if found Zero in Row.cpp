#include<iostream>
using namespace std;

// WAP to replace whole row with zero if '0' found on any row of the Matrix

int main(){
	int a[3][3]= {{1,2,3},
				{4,5,0},
				{7,8,9}
				};
	
	cout<<endl;
	
	int i,j;
	
	// Find and replace row with zero
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==0){		// if zero found
				j=0;			// set location of row to the start i.e j=0
				while(j<3){		
						a[i][j]=0;	// while whole row ends replace all the row with 'zero'
					//	a[1][0]=0;
					//	a[1][1]=0;
					//	a[1][2]=0;
						j++;
					// loop will exit and i will increament 2 
				}
			}
		}
	}
	
	// Print the Matrix :
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
	
	return 0;
}
