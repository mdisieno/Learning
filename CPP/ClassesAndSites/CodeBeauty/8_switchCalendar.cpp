/*************************************************
 * Switch Calendar
 * 
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=ixIC3-Dk7t8&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=10
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int year = 0, month = 0;

	cout << "Year, month: ";
	while(month<1 || month>12){
		if (month != 0){
			cout << "Please enter a valid month (1-12): ";
		}
		cin >> year >> month;

	}
	//Leap Year = year % 4 == 0 && year % 100 != 0 || year % 400 == 0
	switch (month){
		case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)?
			cout << "29 days":cout << "28 days.";
			break;
		//Feb leap?
		case 4:
			cout << "30 days";
			break;
		case 6:
			cout << "30 days";
			break;
		case 9:
			cout << "30 days";
			break;
		case 11:
			cout << "30 days";
			break;	
		default:
			cout << "31 days";		
		

	}

	//Clean end.
	cout << endl;
	return 0;
}
