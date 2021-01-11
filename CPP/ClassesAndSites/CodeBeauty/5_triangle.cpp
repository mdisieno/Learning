/*************************************************
 * Triangle 
 * Tell what triangle it is (isoceles, etc.)
 * 
 * 
 * 
 * via : https://www.youtube.com/watch?v=YQdpZYRmzmk&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=5
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    int a;
    int b;
    int c;

    cout << "Triangle chooser" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    //Loop to iterate through all 3 possible triangles.
    for (int i = 0;i < 3;i++){
        //case to input values, I'm too lazy to type
        switch (i) {
            case 0:
                a = 3, b = 3, c = 3;
                break;
            case 1:
                a = 3, b = 4, c = 3;
                break;
            case 2:
                a = 3, b = 4, c = 5;
                break;
        }

        //everything is equal as if a=b, and b=c, then by proxy b=a
        if (a==b && b==c){
            cout << "With sides: " << a << " " << b << " " << c << " " << endl;
            cout << "you have an equilateral triangle." << endl;
        //nothing is equal
        }else if (a!=b && b!=c && a!=c){
            cout << "With sides: " << a << " " << b << " " << c << " " << endl;
            cout << "you have an scalene triangle." << endl;
        //default last choice.
        }else{
            cout << "With sides: " << a << " " << b << " " << c << " " << endl;
            cout << "you have a isoceles triangle." << endl;
        }
    }
	return 0;
}
