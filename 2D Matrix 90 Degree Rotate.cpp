#include<iostream>
#include<vector>
using namespace std;

 void rotateMatrix(int matrix[3][3]){
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3; j++){
			cout<<" "<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n"<<"Rotated Matrix"<<"\n";
	for(int i=0;i<3;i++){
		for(int j=2;j>=0;j--){
			cout<<" "<<matrix[j][i]<<" ";
		}
		cout<<"\n";
	}	
}

//		123		741
//		456		852
//		789		963

int main() {
	int matrix[3][3]=  {1,2,3,			
						4,5,6,		
						7,8,9};    	
	cout<<"the Matrix :"<<"\n";
	rotateMatrix(matrix);
	return 0;
	}
