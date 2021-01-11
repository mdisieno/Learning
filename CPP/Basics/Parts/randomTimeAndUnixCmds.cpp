/*************************************************
 * Random Number Generator with time and Unix Sleep
 * By Michael Disieno
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=Kc1zJ3FpRfA&list=PL68244A805BD16617&index=10
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>

//needed to add sleep timer via unix std
#include <unistd.h>
//needed to push time function into srand
#include <ctime>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //using current time in seconds to create varying
    //random seed for random.
    srand(time(NULL));
    //Generate a random number, and up to 100(0-99)
    int r = rand() % 100;
    for(int i=0;i < 4;i++){
        cout << r << endl;
        sleep(10);
    }

	//Clean end.
	cout << endl;
	return 0;
}
