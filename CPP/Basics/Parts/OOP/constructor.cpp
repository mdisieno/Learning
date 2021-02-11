/*************************************************
 * Constructor
 * By Michael Disieno
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
#include <list>
using namespace std;

class Car{
    private:
        string make;
		string model;
		string color;
		int modelYear;
		double displacement;

	public:
		//Basic constructor to set default values.
		//ever default car is a 2016 GTI that is white.
		Car(){
			make = "Volkswagen";
			model = "GTI";
			color = "White";
			modelYear = 2016;
			displacement = 2.0;
		}
		string tellMeAboutCar(){
			cout << "You have a ";
			cout << modelYear;
			cout << " " << make << " " << model;
			cout << " that is the color " << color;
			cout << " with the displacement of ";
			cout << displacement << ".";
		}
};


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	
	Car* GTI=new Car();

	GTI->tellMeAboutCar();

	//Clean end.
	cout << endl;
	return 0;
}
