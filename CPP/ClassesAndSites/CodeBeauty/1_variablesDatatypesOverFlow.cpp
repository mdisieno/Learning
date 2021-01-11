/*************************************************
 * Variables, DataTypes, Overflow, SizeOf
 * 
 * 
 * 
 * 
 * via: https://www.youtube.com/watch?v=solufpKPDwY
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //Basic data types
    int number = 4, intMax = INT64_MAX;
    double money = 10.20;
    string name = "Mike";
    bool isReal = true;
    char initial = 'M';
    

    //printed in bytes. Thus 32bits
    cout << "Size of number's mem is: " << sizeof(number) << endl;
	cout << "Int min value is: " << INT64_MIN << endl;
    cout << "Int max value is: " << INT64_MAX << endl;


    //Data Type overflow - add 1 to max.
    intMax += 1;
    cout << "IntMax overflowed: " << intMax << endl;
    //outputs 0 as loops back to beginning.

	return 0;
}
