#include<iostream>
using namespace std;

// Dynamic Memory Allocation :


// code example one
//void update(int n){				// copy of a value passed
//	n++;
//}
//int main() {
//int i=6;	
//cout<<"before : "<<i<<endl;		// 6
//update(i);						// function called
//cout<<"after : "<<i;				// 6
//// no change  since it is just passing the copy and function has nothing to do with original 'i'
//// variable , i is just providing function with argument
//return 0;
//}



// code example two
//void update(int& n){				// reference of a value passed
//	n++;
//}
//int main() {
//int i=6;	
//cout<<"before : "<<i<<endl;		// 6
//update(i);						// function called
//cout<<"after : "<<i;				// 7
//// value change  since it is passing the reference of original variable
//// i is providing function with variable reference argument
//return 0;
//}


// basic difference between code one and two is its creating new variable and in second code
// its passing the reference of already existing variable so itll just update second


//	code 3

//int& function(int n){
//	int abc=n;
//} 
//int main(){
//	int i=5;
//	function(i);
//}

// here in above code we have tried to pass the function as a reference but it will give ERROR and
// it is a bad practice
// the reason is that it may have variable which is only valid for that function if that function is 
// pass by reference function then it is not creating memory for that location and variable will die 
// outside of that function

// thats why you shoud not do
// int& func() nor int* func()  X

// code 4
//int n;
//cin>>n;
//int arr[n];
// this is also not a right practice since it takes value of 'n' at runtime and we actually
// suppose to have memory allocated in 'stack memory' at compile time so it can result in 
// program crash

// when you use stack memory it is static allocation
// when use heap memory it is dynamic allocation


//by default we allocate the stack memory but if we want to create the data in heap memory we need 
//to allocate the memory according
//eg. int* arr = new int[n] // this is the formula for creating memory in heap
//1. first of all when we create memory in heap we cannot assign name for the memory like we used to
//do with static memory eg. ' char car[10]="Nissan" '
//2. we used 'New' keyword to assign the memory in heap
//3. But heap memory only return the address and it does not have name so we use pointer to access
//	 the memory in heap since pointer stores the address just like shown in first example

// whatever the memory we create we need to free this memory in heap memory since such memory get free
// in stack memory but not in heap memory which can result in memory leaks
//eg.
//	delete i;			// to delete variable memory
//	delete [] arr;		// to delete array memory
//	
//	// to delete 2D array memory
//	for(i=0;i<n;i++){
//		delete [] arr[j];	// to delete the columns of 2D array
//	}
//	delete []arr[i];		// to delete the rows of 2D array 
	// we need to delete first columns and then rows to avoid wastage of memory


//	To create the 2D array in heap using pointer :
//	int n;
//	cin>>n;
//	
//	int** arr= new int*[n];
//	// here int* [] shows one array, which we are applying to double pointer which is pointing to
//	// 2 arrays , the more arrays the more pointers we will take  
//	
//	for(int i=0;i<n;i++){
//		arr[i]=new int[n];
//	}



	 
