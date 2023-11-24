		/* 
						**********
						****  ****
						***    ***
	               		**		**					
						*        *
						*        *
						**      **
						***    ***
						****  ****
						**********                 */




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
 		
 		while(j)
 		{	
 		cout<<"*";
		j=j-1;	
		}
		
		//triangle 2
		
		 int space=2;
		 while(space<=i)
		 {
		 	cout<<" ";
		 	space=space+1;
		 }
		 
		//triangle 3
		
		 int space2=2;
		 while(space2<=i)
		 {
		 	cout<<" ";
		 	space2=space2+1;
		 }


		//triangle 4
		
		int k=n-i+1;
 		
 		while(k)
 		{	
 		cout<<"*";
		k=k-1;	
		}
		
	cout<<endl;
	i=i+1;
 	}
		
		
	int l=1;
 	while(l<=n)
 	{

		 int m=1;
		 while(m<=l)
		 {
		 	cout<<"*";
		 	m=m+1;
		 }
		 
		 
		 //triangle 3
 		
 		
 		int space=n-l;
 		
 		while(space)
 		{	
 		cout<<" ";
		space=space-1;	
		}
		
		
		//triangle 4
		int space2=n-l;
 		
 		while(space2)
 		{	
 		cout<<" ";
		space2=space2-1;	
		}
		
		
		int q=1;
		 while(q<=l)
		 {
		 	cout<<"*";
		 	q=q+1;
		 }
		 
		
		cout<<endl;
		l=l+1;
 	}
 	
 	

return 0;
}
