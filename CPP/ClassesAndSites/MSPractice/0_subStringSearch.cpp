/*************************************************
Author:Michael Disieno
Reason:Practicing for Microsoft Job

Implement substring search  - be sure to solve for edge 
cases and potentially update solution if necessary  

Proposed solution:
1.Take in the string
2.Take in the requested subString
3.See if it is there
4. See what edge cases might be?
**************************************************/
#include <iostream>
using namespace std;

string solution(string input, string search){
string strToSearch = input;
string subString = search;
int strFound = 99;

	if (strToSearch.find(subString) != 99){
		cout << "You found " <<"\"" << subString << "\"" << " in ";
		cout <<"\"" << strToSearch << ".\"" << endl;
	}else{
		cout << "String not found." << endl;
	}
}


int main(){
	string input = "This is a test string";
	string search = ".";
	
	solution(input, search);
	return 0;
}
