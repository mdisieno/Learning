#include <iostream>
#include <string>
using namespace std;
/************************************
//Definitions:

Both are stored within the RAM
They work differently, but fundamentally
they are the same.
//Stack =
*LIFO / CPU manages stack/ Very fast
*Memory is managed for you.
*When function exits, all variables are popped
off the heap.

//Heap = 
*not managed by CPU, more free floating.
*requires direct allocation and freeing 
*No size restrictions

//////////////////////////////////////////

Stack V Heap ProVCon:
=Stack
-very fast access
-don't have to explicitly de-allocate variables
-space is managed efficiently by CPU, memory will not become fragmented
-local variables only
-limit on stack size (OS-dependent)
-variables cannot be resized

=Heap
-variables can be accessed globally
-no limit on memory size
-(relatively) slower access
-no guaranteed efficient use of space, memory may become fragmented over time as blocks of memory are allocated, then freed
-you must manage memory (you're in charge of allocating and freeing variables)
-variables can be resized using realloc()
************************************/
struct Vector3{
	float x,y,z;

};

int main(){
	//Stack allocation
	int value = 5;
	int array[5] = {1,2,3,4,5};
	//Stack struct
	Vector3 vector;
	
	//Heap allocation
	int* hvalue = new int;
	*hvalue = 5;		
	int* harray = new int[5] {1,2,3,4,5};
	//Heap struct
	Vector3* hvector = new Vector3();
	
	return 0;
}
