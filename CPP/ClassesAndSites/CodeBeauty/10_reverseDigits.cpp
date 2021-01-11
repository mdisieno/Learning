/*************************************************
 * Reverse Digits In Number
 * 
 * 
 * 
 * via:
 * https://www.youtube.com/watch?v=bVBJoxrhgEM&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=13
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //Count Digits in a number
    int number, reversedNumber=0;
    cout << "Number: ";
    cin >> number;//123

    //reversing number - Follow numbers to understand
    while(number!=0){
        //1 - lastDigit = remainder; Ex 123%3=3
        int lastDigit = number % 10;
        //2 - 
        reversedNumber *= 10;
        //3 - Add lastDigit to reversed;
        reversedNumber += lastDigit;
        //4 - Remove last digit
        number /= 10;

    }
    cout << "Reversed: " << reversedNumber;
	//Clean end.
	cout << endl;
	return 0;
}
