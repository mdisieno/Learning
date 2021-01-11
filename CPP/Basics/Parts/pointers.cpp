/*************************************************
 * Pointers
 * By Michael Disieno
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=DTxHyVn0ODg
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>

//Needed for memset() - http://www.cplusplus.com/reference/cstring/memset/
#include <string.h>
using namespace std;

/************************************************
 * Pointers deal with memory. They are int's by
 * design they are just a location of where the
 * memory is at. 
 * 
 **********************************************/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int var = 8;
    char letter = 'A';
    //no type need for pointer. If we give it a type we presume or help the compiler
    //a pointer is just a mem address, technically an int.
    //using the & points to the memory address of that variable.
    int* ptr = &var;

    cout << "Pointer: " << ptr << endl;

    //dereferencing the pointer.
    cout << "Pointer value: " << *ptr << endl;

    //this allocates memory for that pointer, it does not associate a assign an array
    //to the char pointer.
    char* buffer = new char[8];
    //Assign char to pointer
    //memset(pointer, fill, size)
    memset(buffer, letter, 8);

    //double+ pointers store a pointer that points to a pointer....
    char** bufferPtr = &buffer;

    cout << "buffer pointer points to buffer is at: " << bufferPtr;
    cout << " with a value of " << bufferPtr << "." << endl;

    cout << "This pointer that point to is buffer at: " << buffer;
    cout << " with a value of " << *buffer << ".";

     //clean up after setting memory
    delete[] buffer;

	//Clean end.
	cout << endl;
	return 0;
}
