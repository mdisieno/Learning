/*************************************************
 * Classes and Objects
 * 
 * 
 * 
 * via:
 * https://www.youtube.com/watch?v=iVLQeWbgbXs
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

/*
Class is a template or blueprint
and object is based on that class
*/

class Car{
    string make;
    string model;
    string color;
    int modelYear;

    public:
        void assignCar(string carMake,string carModel, string carColor, int year){
            make = carMake;
            model = carModel;
            color = carColor;
            modelYear = year;
        }
        string makeModel(){
            return make + " " + model;
        }
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //Make new object
    Car volkswagenGTI;
    volkswagenGTI.assignCar("Volkswagen","GTI","White",2016);
    cout << "You have created a " << volkswagenGTI.makeModel() << endl;

	//Clean end.
	cout << endl;
	return 0;
}
