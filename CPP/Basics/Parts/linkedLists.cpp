/*************************************************
 * Linked Lists
 * By: Michael Disieno
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=H5lkmKkfjD0
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>
using namespace std;

class List{
	private:
	//putting the struct inside the list as it as part of it
		struct node{
			int data;
			//doubly linked so two pointers.
			node* next;
			node* previous;
		};
		//quick route to model a node*
		typedef struct node* nodePtr;
		nodePtr head;
		nodePtr current;
		nodePtr temp;
		/*
		alternate route:
		typedef struct node{
			int data;
			//doubly linked so two pointers.
			node* next;
			node* previous;
		}* nodePtr;
		*/

	public:
	//constructor to create values once list item is created
	List(){
		head = NULL;
		current = NULL;
		temp = NULL;
	}
	void addNode(int addData){
		//this is adding a new node
		nodePtr n = new node;
		//next one is empty as it is new.
		n->next = NULL;
		//the passed arg goes in here.
		n->data = addData;
		//if there is already a head(first) node....
		if (head != NULL){
			//...point current to that head.
			current = head;
			//while we are not at the end of the list...
			while(current->next != NULL){
				//...Move down the list to the next.
				current = current->next;
				//when at the end of the list it'll exit out.
			}
			//from there, it'll add the new node at the end of current.
			current -> next = n;
		}else{//if head is null, there is no list.....
			//then we need the new node to be the head.
			head = n;
		}
	};
	void deleteNode(int delData){
		//start off empty
		nodePtr delPtr = NULL;
		//temporary location starting at the head
		temp = head;
		//start at the head of the list.
		current = head;
			while(current != NULL && current->data != delData){
				//set temp to follow current...
				temp = current;
				//...then move current ahead 1
				current = current->next;
			}
		if (curr == NULL){
			//this means you at the end of the list.
			cout << delData << "was not in the list." << endl;

		}else{ //it would be time to delete now.
			//set the pointer to current.
			delPtr = current;
			//move current now to next
			current = current->next;
			//now set temp's next to the current we just set.
			temp->next = current;
		}

	};
	void printList();
};


list<int> mylist(5,0); // make a simple list of 5 el with 0's
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	
	return 0;
}
