/*************************************************
 * Rock Paper Scissors
 * 
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=vqNaHBToG5Q&list=PL68244A805BD16617&index=12
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>

//pushing seconds to random out choice.
#include <ctime>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //Rock=1,Paper=2, Scissors=3
	string choice;
    int machineChoice = srand(time(NULL));
    int userChoice;
    string tie = "Darn a tie, go again.";
    string win = "You win!!!!";
    string lose = "You lose, sucks to suck.";



    cout << "You have three tries, good luck...." << endl;
    for (int i = 0;i < 3; i++){
        cout << "Rock, Paper or Scissors?: ";
        cin << choice;
        while (choice != "Rock" || choice != "rock" || choice != "Paper" || choice != "paper" || choice != "Scissors" ||choice != "scissors"){
            cout << "Please type in Rock, Paper, or Scissors.";
        }
        if (choice == "rock" || choice == "Rock"){
            userChoice = 1;
        }else if (choice == "Paper" || choice == "paper"){
            userChoice = 2;
        }else if (choice == "Scissors" || choice == "scissors"){
            userChoice = 3;
        }

        //Find a cleaner way to do this and not waste time on it. 

        //if user input
        switch (userChoice){
            case 1:

            break;
            //###############
            case 2:

            break;
            //###############
            case 3:

            break;
        }
        //if machine output
    }

	//Clean end.
	cout << endl;
	return 0;
}
