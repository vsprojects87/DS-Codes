/* 
	1234554321
	1234**4321
	123****321
	12******21
	1********1   */	


#include<iostream>
using namespace std;

int main()
{
	int i=1;
	int n;
 	cin>>n;
 
 
 while(i<=n)
 	{
 		//triangle 1
 		
 		int j=n-i+1;
 		int count=1;
 		while(j)
 		{
 		cout<<count;
 		count=count+1;
		 j=j-1;	
		}
		
		//traingle 2
		
		int s=2;
		while(s<=i)
		{
			cout<<"*";
			s=s+1;
		}
		
		
		//triangle 3
	
		int t=2;
		while(t<=i)
		{
			cout<<"*";
			t=t+1;
		}
		
		
		//triangle 4
		    
		int v=n-i+1;
 		
		 while(v)
 		{
 		cout<<v;
 	
		 v=v-1;	
		}
		
		
		cout<<endl;
		i=i+1;
 	}
return 0;
}
