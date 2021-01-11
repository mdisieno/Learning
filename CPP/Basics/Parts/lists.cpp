/*************************************************
 * lists.cpp
 * 
 * 
 * 
 * via:
 * https://www.youtube.com/watch?v=lSIoWv92rrU
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
//needed for lists
#include <list>
using namespace std;

/*
Lists are a grouping of nodes that have ptrs to before
and after, as well as the info in the middle.

Lists are typically doubling linked. As in they link to
and from as show in the Node below.

Node:
        _______
<------ | prev |
        -------
        |  1   |
        -------
        | next | ---->
        -------
Pro:
Doesn't require the quirks of vectors and arrays when it
comes to putting elements within the middle of the list.
You insert and modify the pointer before and after to point
to the new node.

Con:
There is no way to go directly to an element, ie. vector[i]
-Very much like bus topography.... :(


*/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	list<int> myList(5,0);
        list<int>::iterator outputIt;
        list<int>::iterator it = myList.begin();
        list<int>::iterator insertIt = myList.begin();
        list<int>::iterator deleteIt = myList.begin();
        //With lists, you can't directly assign values like vectors/arrays
        //This is because of the structure of the list.

        //Bear with me, hair up the but moment. I felt frisky.
        //List loop to handle print and such.
        for (int i = 0; i <= 2;i++){
                if (i == 0){
                        cout << "Swapping a value:" << endl;
                        //VV-Moves iterator up 2 from beginning-^^.
                        advance(it, 2);
                        //from there you deref and assign.
                        *it = 10;
                        //"Iterating" through a list. We treat lists like vectors with .begin/.end
                        for(outputIt = myList.begin();outputIt != myList.end();outputIt++){
                                cout << *outputIt << " ";
                        }
                        cout << endl;
                }else if (i == 1){
                        cout << "Inserting Now:" << endl;
                        advance(insertIt, 3);
                        myList.insert(insertIt, 14);
                        //"Iterating" through a list. We treat lists like vectors with .begin/.end
                        for(outputIt = myList.begin();outputIt != myList.end();outputIt++){
                                cout << *outputIt << " ";
                        }
                        cout << endl;
                }else if(i == 2){
                        cout << "Erasing now: " << endl;
                        advance(deleteIt, 3);
                        myList.erase(deleteIt);
                        //"Iterating" through a list. We treat lists like vectors with .begin/.end
                        for(outputIt = myList.begin();outputIt != myList.end();outputIt++){
                        cout << *outputIt << " ";
                        }
                        cout << endl;
                }else{
                        break;
                }
        }


	//Clean end.
	cout << endl;
	return 0;
}
