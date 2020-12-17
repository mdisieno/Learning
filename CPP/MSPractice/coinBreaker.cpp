#include <iostream>
#include <cmath>
using namespace std;

/*
7. Assuming US currency. Coins: [1,5,10,25] Output all 
possible ways to break down the total into coins


Proposed Solution:
Quarters nickels and dimes are all powers of 5.
check largest power of 5 where %= 0.
Make that base. Then go down there from.

Every dime is 2 nickels, ever quarter is 5 nickels,
every quarter is 2 dimes and 1 nickel. 
*/


double pennie = 0.01;
double nickel = 0.05;
double dime = 0.10;
double quarter = 0.25;




void solution(double value){
//double to hold total
    double total = value;

//test if evenly divisible by quarters,nickels,dimes
    double evenPennies = fmod(total,.01);
    cout << endl << evenPennies << endl;
    double evenNickels = fmod(total,.05);
    cout << evenNickels << endl;
    double evenDimes = fmod(total,.10);
    cout << evenDimes << endl; 
    double evenQuarters = fmod(total,.25);
    cout << evenQuarters << endl;
//Place holder for number of q,n,d,p's
    if (evenQuarters = 0){
                        
    }

    if (total < 1.00){ 
        
        

    }else if(total > 1.00){

    }




}


int main(){
    double value;


    //test cases
     value = 5.00;
    cout << "Test Case $" << value << ": ";
    solution(value);
    cout << endl;

    value = 10.00;
    cout << "Test Case $" << value << ": ";
    solution(value);
    cout << endl;

    value = 1.50;
    cout << "Test Case $" << value << ": ";
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
