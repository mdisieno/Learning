#include <iostream>
using namespace std;
/*
Implement substring search  - be sure to solve for edge 
cases and potentially update solution if necessary  

Proposed solution:
1.Take in the string
2.Take in the requested subString
3.See if it is there
4. See what edge cases might be?
*/

string solution(string input, string search){
string strToSearch = input;
string subString = search;
int strFound = 99;


//cout << "SubString: " << strToSearch.find(subString) << endl;

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
