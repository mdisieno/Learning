#include <iostream>
#include <cmath>
using namespace std;

/*
Take a string input and convert it over to 
an int.

1. take in string for input
2. Split string into array
3. return into
*/

int solution(string input){
    cout << "input in string form: " << input << endl;
    cout << "-----------------" << endl;
    int output; //holds value for output & math

    for (int i = input.length(); i > 0;i--){
        int tenthsPlace = input.length() - i;
        if (tenthsPlace > 0){
            //Take tenths Place and power 10 to it.
            int numToAdd = pow(10,tenthsPlace);
            cout << "Current i's value: " << input[i-1] << endl;
            numToAdd *= input[i-1] - '0';
            cout << "Adding: " << numToAdd << " to " << output << endl;
            output += numToAdd;
            cout << endl;
        }else{
            output += input[i];
            cout << "Starting with: " << output << endl;

        }
    }


    cout << "-----------------" << endl;
    cout << "Output is: " << output << endl;
    return output;
}


int main(){
	
    string input = "1234";
    
    solution(input);
	return 0;
}
