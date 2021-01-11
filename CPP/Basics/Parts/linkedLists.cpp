/*************************************************
 * Linked Lists
 * By: Michael Disieno
 * 
 * 
 * 
 * 
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>
using namespace std;
/*
Doubly linked lists are a great way to go:
they have a pointer to and form.
*/


class List{
	private:
	//putting the struct inside the list as it as part of it
		struct node{
			int data;
			//doubly linked so two pointers.
			node* next;
			node* previous;
		};
		//quick route to mode a node*
		typedef struct node* nodePtr;
		/*
		alternate route:
		typedef struct node{
			int data;
			//doubly linked so two pointers.
			node* next;
			node* previous;
		}* nodePtr;
		*/


	public: //this is where the functions go

};


list<int> mylist(5,0); // make a simple list of 5 el with 0's
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	
	return 0;
}
