/*************************************************
 * Swap Vars without 3rd
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

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int a = 20;
	int b = 10;
	int temp = 0;

	//swap with 3rd var
	cout << "Swap with 3rd Var" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;
	temp = a;
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;
	a = b;
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;
	b = temp;
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;
	cout << endl;
	//swap back
	a = 20;
	b = 10;
	temp = 0;

	//swap without 3rd var	
	cout << "Swap without 3rd Var" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;
	a = a + b; //30
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;;	
	b = a - b; //20
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;
	a = a - b; //10
	cout << "A: " << a << ", and B: " << b << ", and Temp: " << temp << endl;

	cout << endl;
	return 0;
}
