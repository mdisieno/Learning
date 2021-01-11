/*************************************************
 * Nested For and DoWhiles
 * 
 * 
 * 
 * via:
 * https://www.youtube.com/watch?v=EntodYyZjc4&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=16
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int grades[3];
    int len = sizeof(grades)/sizeof(grades[0]);
    int average = 0;
	//Put Grades in array.
    for(int i=0;i<=len;i++){
        cout << "Please insert your grade: ";
        cin >> grades[i];
        average += grades[i];
    }
    cout << "The total of the grades: ";
    //print grades
    for(int i=0;i<=len;i++){
        cout << grades[i] << " ";
    }
    //adding 1 to length as len is calc'd to las val = 3 
    cout <<" is: " << (average/(len + 1)) << endl;


	cout << endl;
	return 0;
}
