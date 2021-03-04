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
	//go through every letter within i
	for(int i = 0;i < input.length();i++){
//---------------------------------------------------------------------------------------------
		//If you find a number at beginning
		if (isdigit(input[i])){
			output += input[i];
		//if you find a letter at beginning
		}else if (isalpha(input[i])){
			//if you find a number at end
			if(isdigit(input[j])){
				j--;
			}
			//if you find a letter at end
			if(isalpha(input[j])){
				output += input[j];
				j--;
			}
		}
	}
	cout << "---------------------------" << endl;
	cout << "Output: " << output << endl << endl;
	return output;
};

//--------------------------------------------------------------

int main(){
	string input = "ABCD1EFGH2IJKLM3";
	cout << "Input: " << input << endl;
	cout << "---------------------------" << endl;	
	solution(input);
	return 0;
}


