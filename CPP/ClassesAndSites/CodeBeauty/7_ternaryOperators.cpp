/*************************************************
 * Ternary Operators
 * 
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=U8XXuaPy29Q
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    int hostUserNum, guestUserNum, numOfTries = 3;

    cout << "Host, enter your number: ";
    cin >> hostUserNum;
    system("clear");
    

    for(int i=0;i<numOfTries;i++){
        if(i > 0){
            cout << "Sorry that was incorrect, try again." << endl;
        }
        cout << "Guest, enter your number: ";
        cin >> guestUserNum; 
        if (guestUserNum == hostUserNum){
            break;
        }

    }


    //Ternary
    (guestUserNum==hostUserNum)? cout << "Congrats yo got it!!" : cout << "Sorry, you suck..." ;
    cout << endl;


    /*Non-Ternary
    if(guestUserNum==hostUserNum){
        cout << "Congrats you got it!";
    }else{
        cout << "Sorry, you suck.....";
    }
    */
    






	
	return 0;
}
