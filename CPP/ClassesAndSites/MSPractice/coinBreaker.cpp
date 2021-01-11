#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

/*

!!!GOING TO BE A RECURSION PROBLEM!!!

1 dollar = 4 quarters
1 quarter = 5 nickels / 2 dimes + 1 nickel / 25 pennies
1 dime = 2 nickels / 10 pennies
1 nickel = 5 pennies

etc

7. Assuming US currency. Coins: [1,5,10,25] Output all 
possible ways to break down the total into coins


Proposed Solution:
Quarters nickels and dimes are all powers of 5.
check largest power of 5 where %= 0.
Make that base. Then go down there from.
*/

void solution(double value){
    //Doubles for each coin
    double pennie = 0.01;
    double nickel = 0.05;
    double dime = 0.10;
    double quarter = 0.25;
    //double for total
    double total = value;
    //pull dollars from total
    int dollars = int(total);
    //pull change from total
    double change = total - dollars;

    cout << "Even Splits: ";
    cout << (total / quarter) << " quarters" << " or ";
    cout << (total / dime) << " dimes" << " or ";
    cout << (total / nickel) << " nickels" << " or ";
    cout << (total / pennie) << " pennies" << endl;

    //cout << "Dollars: " << dollars << " and change: ";
    //cout << change << endl;


    cout << "ChangeDime: " << (change / .10) << endl;

    if (change == 0){
        //evenly divisble into dollars
    }else if((change / 0.05) == 0){
        //evenly divisible into nickels
        cout << "Evenly divisible by nickels" << endl;
        if((change / 0.10) == 0){
        //evenly divisible into dimes
        cout << "Evenly divisible by dimes" << endl;
        }
        if((change / 0.25) == 0){
        //evenly divisible into quarters
        cout << "Evenly divisible by quarters" << endl;
        }
    }




    
//test if evenly divisible by quarters,nickels,dimes

/*
    int quarterInNickels = 5;
    int dimeInNickels = 2;



    double evenPennies = abs(floor(remainder(total,.01)));
    cout << evenPennies << " / ";
    double evenNickels = abs(floor(remainder(total,.05)));
    cout << evenNickels << " / ";
    double evenDimes = abs(floor(remainder(total,.10)));
    cout << evenDimes << " / "; 
    double evenQuarters = abs(floor(remainder(total,.25)));
    cout << evenQuarters << " / ";

    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    double evenPennies = fmod(total,.01);
    cout << evenPennies << " / ";
    double evenNickels = fmod(total,.05);
    cout << evenNickels << " / ";
    double evenDimes = fmod(total,.10);
    cout << evenDimes << " / "; 
    double evenQuarters = fmod(total,.25);
    cout << evenQuarters << " / ";

*/
cout << endl;
}


int main(){
    double value;


    //test cases
     value = 5.00;
    cout << "Test Case $" << value << ": " << endl;
    solution(value);
    cout << endl;

    value = 10.00;
    cout << "Test Case $" << value << ": " << endl;
    solution(value);
    cout << endl;

    value = 1.50;
    cout << "Test Case $" << value << ": " << endl;
    solution(value);
    cout << endl;

    value = 5.06;
    cout << "Test Case $" << value << ": " << endl;
    solution(value);
    cout << endl;


    /*
    value = 2.54;
    cout << "Test Case $" << value << ": ";
    solution(value);
    cout << endl;
    */
    cout << endl;


	return 0;
}
