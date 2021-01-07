/*************************************************
 * BMI Calc
 * 
 * General operator usage
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
	float weight, height, bmi;
    bmi = weight / (height * height);


    for (int i = 0;i < 3;i++){
        //case to input values, I'm too lazy to type
        switch (i) {
            case 0:
                weight = 66, height = 1.750;
                break;
            case 1:
                weight = 600, height = 1;
                break;
            case 2:
                weight = 240, height = 10;
                break;
        }
        bmi = weight / (height * height);
        cout << "You are: ";
        if (bmi < 18.5){
            cout << "underweight" << endl;
        }else if(bmi>25){
            cout << "overweight" << endl;
        }else{
            cout << "normal weight" << endl;
        }
        cout << endl;
    }
    return 0;


}
