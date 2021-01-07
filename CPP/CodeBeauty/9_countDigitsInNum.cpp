/*************************************************
 * Count Digits In Num
 * 
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=jWISn6pk-XU&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=12
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
    int number;
    cout << "Number: ";
    cin >> number;

    if (number==0){
        cout << "you have entered 0";
    }else{
        //1325
        int counter=0;
        while(number>0){
            counter++;
            number = number / 10;
        }
        cout << "You had " << counter << " digits." << endl;
    }

	//Clean end.
	cout << endl;
	return 0;
}
