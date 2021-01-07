/*************************************************
 * ASCII, Casting and Ciphering
 * 
 * 
 * 
 * 
 * via: https://www.youtube.com/watch?v=fxFcG7Z2J0Q&t=7s
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    char letter;
    bool keepGoing = true;
    while(keepGoing = true){
        cout << "Type in a letter: ";
        cin >> letter;
        cout << "ASCII of " << letter << " is: " << int(letter) << endl;
    }
	return 0;
}
