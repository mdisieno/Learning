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
	
	//Clean end.
	cout << endl;
	return 0;
}
