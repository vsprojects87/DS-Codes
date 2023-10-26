#include<iostream>
#include<vector>
using namespace std;

 void printspiral(int matrix[3][3]){
	
	int rows = 3;
    int cols = 3;
   	int total=rows*cols;
	int count=0;

     int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

     while (count<total) {
         // Print top row
         for (int i = left; i <= right; i++) {
         	count++;
            cout << matrix[top][i] << " ";
         }
         top++;

         // Print rightmost column
         for (int i = top; i <= bottom; i++) {
         	count++;
             cout << matrix[i][right] << " ";
         }
         right--;

         // Print bottom row
             for (int i = right; i >= left; i--) {         	
			 count++;
                 cout << matrix[bottom][i] << " ";
             }
             bottom--;
         

         // Print leftmost column
             for (int i = bottom; i >= top; i--) {
             	count++;
                 cout << matrix[i][left] << " ";
             }
             left++;
         
     }
 }

int main() {
	int matrix[3][3]=  {1,2,3,			741
						4,5,6,			852
						7,8,9};    		963
	cout<<"the spiral print :"<<"\n";
	printspiral(matrix);
	return 0;
	}





