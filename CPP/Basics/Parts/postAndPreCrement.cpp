/*************************************************
 * Post and Pre-Crement.
 * 
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


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	
    int a = 0;

    //demonstrating post increments.  
    cout << "Printing out a=0 with post increment"<< endl;
    cout << a++ << endl;
    cout << a << endl;

    //Reset to 0 to demonstrate pre increment.
    a = 0;

    cout << "Printing out a=0 with pre increment"<< endl;
    cout << ++a << endl;
    cout << a << endl;

	//Clean end.
	cout << endl;
	return 0;
}
