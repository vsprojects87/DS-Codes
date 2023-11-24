		/* 
							 **
						    ****
						   ******
						  ********
						 **********
						 **********
						  ********
						   ******
						    ****
						     **
						
	               								*/	





#include<iostream>
using namespace std;

int main()
{
	int i=1;
	int n;
 	cin>>n;
 	
 while(i<=n)
 	{

		 int space=n-i;
		 while(space)
		 {
		 	cout<<" ";
		 	space=space-1;
		 }
		 
		 
		 //triangle 1
 		
 		
 		int j=1;
 		
 		while(j<=i)
 		{	
 		cout<<"*";
		j=j+1;	
		}
		
		
		//triangle 2
		int k=1;
 		
 		while(k<=i)
 		{	
 		cout<<"*";
		k=k+1;	
		}
		
		//
		
		int space2=n-i;
		 while(space2)
		 {
		 	cout<<" ";
		 	space2=space2-1;
		 }
		 
		
		cout<<endl;
		i=i+1;
 	}
 	
	int l=1;
 	while(l<=n)
 	{

		 int space=2;
		 while(space<=l)
		 {
		 	cout<<" ";
		 	space=space+1;
		 }
		 
		 
		 //triangle 3
 		
 		
 		int m=n-l+1;
 		
 		while(m)
 		{	
 		cout<<"*";
		m=m-1;	
		}
		
		
		//triangle 4
		int o=n-l+1;
 		
 		while(o)
 		{	
 		cout<<"*";
		o=o-1;	
		}
		
		//
		
		/*int space2=n-i;
		 while(space2)
		 {
		 	cout<<" ";
		 	space2=space2-1;
		 }
		 
		*/
		cout<<endl;
		l=l+1;
 	}
 	
 	
 	
return 0;
}
