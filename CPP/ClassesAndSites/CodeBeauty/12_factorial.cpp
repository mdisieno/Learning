/*************************************************
 * Factorial
 * 
 * 
 * 
 * via:
 * https://www.youtube.com/watch?v=V3w8PiJ8Zg0&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=15
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //6! = 1*2*3*4*5*6 = 720
    int input;
    int total = 1;
    cout << "Input a number to factorial: ";
    cin >> input;

    for (int i = 1;i <= input;i++){
        //takes increment of i and * by total, thus factorial.
        total *= i;
    }
    cout << "Your factorial is: " << total << endl;
	//Clean end.
	cout << endl;
	return 0;
}
