/*************************************************
 * DoWhile Loops
 * 
 * 
 * 
 * via:
 * https://www.youtube.com/watch?v=HcBqJkegqpM&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=14
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int usersPin = 1234, pin, errorCounter = 0;
    

    do{
        errorCounter++;
        cout << "Please enter your pin: ";
        cin >> pin;
    //needs to be && as if 1 is false, then out.
    }while(pin != usersPin && errorCounter < 3);
	//Clean end.
	cout << endl;
	return 0;
}
