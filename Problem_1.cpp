/*

Question : Substraction of product and sum of digit 

input : n=234
n%10 = 234 %10 = 4 
	   23  %10 = 3 
	   2   %10 = 2 	   
product = 2*3*4=24 
sum = 2+3+4=9 
answer  =  product-sum  = 24-9 = 15
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number :"<<endl; // n=234
	cin>>n;
	
	int prod=1;
	int sum=0;
	
	while(n!=0)
	{
		int digit = n%10;
		prod = prod * digit;
		sum = sum + digit;
		n=n/10;
	}
	int answer = prod - sum;
	cout<<answer;
	return answer;
}
