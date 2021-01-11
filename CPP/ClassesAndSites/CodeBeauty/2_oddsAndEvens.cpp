/*************************************************
 * If/Else - Odds/Evens
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
	int input;
    string choice = "";
    int count = 0;
    bool keepGoing = true;
    cout << "Enter a whole number: ";
    cin >> input;
    cout << endl;
    while(keepGoing==true){
            //Mod 2 to check for no remainder
        if (input % 2 == 0){
            cout << "You put in an even number." << endl;
        }else{
            cout << "You put in an odd number." << endl;
        }
        count++;
        if (count >= 1){
            cout << "Keep going? (Y/N): ";
            cin >> choice;
            while(choice != "Y" ||choice != "y" ||choice != "N" ||choice != "n"){
                cout << "Please type in a Y or N: ";
                cin >> choice;
                if (choice == "Y" ||choice == "y" ||choice == "N" ||choice == "n"{
                     break;
                })
               
            }

        }
    }



    
	return 0;
}
