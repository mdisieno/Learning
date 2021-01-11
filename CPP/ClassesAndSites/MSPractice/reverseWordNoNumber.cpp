#include <iostream>
#include <ctype.h>
using namespace std;
/*
Reverse the word order in a string while leaving any 
non-letter characters in place 

input: ABCD_1_EFGH_2_IJKL_3
output: LKJI_1_HGFE_2_DCBA_3

*/

string solution(string input){
	string output = "";
	int j = input.length() - 1;
	//cout << "Length of Input = " << j << endl;
	//cout << "---------------------------" << endl;
	for(int i = 0;i < input.length();i++){
		//go through input and very non numbers
		//cout << "i index = " << i << " / ";
		//cout << "i = " << input[i] << endl;
//---------------------------------------------------------------------------------------------
		//If you find a number
		if (isdigit(input[i])){
			//cout << "You found a digit at: " << i << " with a value of: " << input[i] << endl;
			output += input[i];
			//cout << "Your output at: " << i << " is now: " << output[i] << endl;
		}else if (isalpha(input[i])){
			//cout << "You found a letter at: " << i << " with a value of: " << input[i] << endl;
			if(isdigit(input[j])){
				j--;
			}
			if(isalpha(input[j])){
				output += input[j];
				//cout << "Your output at: " << i << " is now: " << output[i] << endl;
				j--;
			}
		}



	}
	cout << "---------------------------" << endl;
	cout << "Output: " << output << endl << endl;
	return output;
};

int main(){
	string input = "ABCD1EFGH2IJKLM3";
	cout << "Input: " << input << endl;
	cout << "---------------------------" << endl;	
	solution(input);
	return 0;
}



/*

		for (int z = 0;z < numbers.length();z++){
			//compare each input[i] to a number
			if (input[i] == numbers[z]){
				cout << "you found a number" << endl;
				cout << "Your number is: " << input[i] << endl;
				cout << "It's place is " << i << endl;
				//put number in current place for output
				output[i] = input[i];

			}else{
				output[i] = input[j];
				cout << "J is currently: " << j << endl;
			}
		}


*/