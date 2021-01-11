/*************************************************
 * Functions
 * By Michael Disieno
 * 
 * 
 * Just a random test of functions with a mild example
 * of polymorphism.
 * 
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>
using namespace std;

//functions can have return types. This one doesnt
//return anything thus it is void.
void thisIsAFunction(){
    cout << "I do nothing" << endl;
}
void thisIsAFunction(int count){
    cout << "This is an example of Polymorphism." << endl;
    for (int i = 0;i <= count; i++){
        cout << "I do nothing " << (i+1) << " times." << endl;
    }
    cout << endl;
}

string thisFunctionReturns(string input){
    cout << input << endl;
    cout << "now I'm changing it to: ";
    input = "I am now a longer sentence";
    return input;
}



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int numberOfTimes = 3;
    string phrase = "I am a sentence";
    //Call the original function
    thisIsAFunction();
    //Example of Polymorphism, same name but with int.
    thisIsAFunction(numberOfTimes);
    cout << thisFunctionReturns(phrase);
	//Clean end.
	cout << endl;
	return 0;
}
