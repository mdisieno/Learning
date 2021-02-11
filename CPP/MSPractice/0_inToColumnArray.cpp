/*************************************************
Author:Michael Disieno
Reason:Practicing for Microsoft Job

5. Given an integer value greater than or equal to 0, 
return the (not quite) corresponding excel column name? 
For example : 0 => "A", 25 => "Z", 26 => "AA", 27 => "BB", 
51 => "ZZ", 52 = "AAA" 
*************************************************/
#include <iostream>
using namespace std;

void solution(int choice){
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string answer;
    /*
    used to see how many characters
    ie 1-25 = A-Z / 26 - 51 = AA - ZZ
    */
    int howMany = (choice / 26) + 1;

    /*
    used to see what letter goes into it
    divide the choice % 26 to get remainder
    */


    //Code Trace for howMany var   
    //cout << "How Many: " << howMany << endl;


    //decide what letter
    int whatLetter = choice % 26;

    //print it out so (howMany) times
    
    if (howMany == 0) {
        cout << abc[whatLetter];
    }else if (howMany >= 1){
        for (int i = 1;i<=howMany;i++){
        cout << abc[whatLetter];
        }
    }


    
    cout << endl;

    /*
    JAIL:

    */
    
};


int main(){

    int choice;

    cout << "Below is conversion of any number into a respective excel column." << endl;
    cout << "Each number below is divided by 26, to decide on number of repetitions." << endl << endl;
    cout << "Test Case 26: ";
    choice = 26;
    solution(choice);
    cout << "Test Case 25: ";
    choice = 25;
    solution(choice);
    cout << "Test Case 51: ";
    choice = 51;
    solution(choice);
    cout << "Test Case 52: ";
    choice = 52;
    solution(choice);
    cout << "Test Case 78: ";
    choice = 78;
    solution(choice);
    

    cout << endl << endl;
	return 0;
}
