#include<iostream>
#include<vector>
using namespace std;

int main() {
//	basic pointer logic :

//	int n=10;
//	int *p;
//	p=&n;
//	*p++;		// will increase the address just like p++
//	(*p)++;		// will increase the value store on address because of "()" brackets
				// but with increasing the value of pointer the value stored on original variable 
				// will also change eg. n=11
//	cout<<" n : "<<n<<"\n";
//	cout<<"&n : "<<&n<<"\n";
//	cout<<"*p : "<<*p<<"\n";
//	cout<<" p : "<<p<<"\n";



// array pointers

//int a[5];	// 	array 'a' has specific address which cant be change
//// ERROR
//a=a+1;	//	this is use to increase the address of pointer but array 'a' has already 
			//	specific location and variable address cannot be change
//	example
//int *p=&a;
//p=p+1;



// difference of charecter array and integer array

//int a[5]={1,2,3,4,5};
//char c[6]="abcde";		// last char will be \0
//// here will print the address of first location
//cout<<a<<endl;
//// here will print the sting
//cout<<c<<endl;
//char *ch=&c[0];
//// same as char array it will print the entire string as a whole block and not address like integer array
//cout<<ch;


// what not to do with char pointer :

//char c[5]="abcd";
//char *ch="abcd";
// this is not a right approach since *ch will point to only first element
// of char string and not entire string
//cout<<ch;


// pointers with functions

//void fun(int *p){	// you need to take value pointer as a parameter since we need value
//	cout<<*p<<endl;
//}
//int main(){
//	int a=5;
//	int *p=&a;
//	fun(p);
//	// we are not going to send *p since it'll directly pass value reference rather than 
//	// address reference, we only send address as a reference so it can point to the value
//	// NOTE : all the arguments we pass in function parameters are by default reference pointer
//	//		  we only sends reference and not value directly
//}




// double pointers :
//	int a=5;
//	int *p=&a;
//	int **q=&p;
//	cout<<" q: "<<q;
// 	double pointer use to store the address of other pointers
// 	cout<<p<<endl;		// p will print address of a
//	cout<<*q<<endl		// *q will print value inside p i.e address which is stored in p
//	cout<<**q<<endl;	// **q will print value inside p->a i.e 5



// why we use int* a=&b; and not pointer a=&b;
//	int* represent the type of data and also allows compiler to understand how much memory to assign

return 0;			
}						 
