#include <bits/stdc++.h>
#include<iostream>
using namespace std;



// Creating a node
class Node {
   public:
  int value;
  Node* next;
  Node(int value){
			this -> value = value;
			this -> next = NULL;
		}
};


void print(Node** head_ref){
	Node* printdata = *head_ref;
 	while (printdata != NULL) {
   		cout << printdata->value<<" ";
    	printdata = printdata->next;
	}
}

void insertAtHead(Node* &head, int value){
	Node* newNode = new Node(value);
	newNode->next=head;// new node will point at head
	head=newNode;		// new head is newnode
}

void insertAtTail(Node* &tail,int value){
	Node* newNode=new Node(value);
	tail->next=newNode;	// last elements next will point at newnode
	tail=tail->next;	// new tail is tails next
}


void insertAtMiddle(Node* &prev,Node* &head, int value, int pos){
	Node* newNode=new Node(value);
	prev=head;

	for(int i=1; i < pos ; i++) {
  		if(prev->next != NULL) {
    	prev = prev->next;	// we are traversing to position using loop
  		}
	}
	newNode->next=prev->next;	// next element of previous node will be point by newnodes next
	prev->next=newNode;			// prev nodes next will be newnode now
}


void deleteHeadNode(Node* &head){
	head=head->next;	// we are skipping head and telling new head is heads next element
}


void deleteTailNode(Node* &head){
	Node* temp = head;
	while(temp->next->next!=NULL){	// we are going untill previous node of tail node and skipping the 
	  temp = temp->next;			// last node by directly pointing next to null
	}
	temp->next = NULL;
}


void deleteMiddleNode(Node* &head,int pos){
	Node* temp=head;
	for(int i=1; i < pos; i++) {
  		if(temp->next!=NULL) {
    	temp = temp->next;
  		}
	}
temp->next = temp->next->next;	// we will traverse at the position and will skip the nexts pointer to
}								// nexts next element


// Search a node
bool searchNode(Node** head_ref, int key) {
  Node* current = *head_ref;

  while (current != NULL) {
    if (current->value == key) return true;
      current = current->next;
  }
  return false;
}

// we are only passing the reference of the head, we have written ** to access the value of 
// reference type node pointer
void sortLinkedList(Node** head_ref) {
  Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
    return;
  } else {
    while (current != NULL) {
      // index points to the node next to current
      index = current->next;

  	while (index != NULL) {
        if (current->value > index->value) {	//we are simply storing next element of current 
          temp = current->value;				// and then comparing if current elem is bigger than
          current->value = index->value;	// next, if bigger we willswapped and increase value to next
          index->value = temp;
    	  }
    	  index = index->next;
  	}
  	current = current->next;
    }
  }
}



int main() {

  Node* one = new Node(1);

  Node* head = one;
  Node* tail = one;
  
  insertAtHead(head,10); //10 1
  insertAtTail(tail,14); // 10 1 14
  insertAtTail(tail,17); // 10 1 14 17
  
  Node* prev;
  insertAtMiddle(prev,head,22,2); // 10 1 22 14 17
  insertAtMiddle(prev,head,43,3); // 10 1 22 43 14 17
  
//  deleteHeadNode(head); // 1 22 43 14 17
//  deleteTailNode(head); // 1 22 43 14
//  deleteMiddleNode(head,2); // 1 22 14
//  sortLinkedList(&head);
  print(&head);
  cout<<endl;

//if( searchNode(&head,1) == true ){
//	cout<<"Element found in link list";
//}else{
//	cout<<"Not found";
//}
   
  return 0;
}
