#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>
using namespace std;

char * strstr(const char * str, const char * substr){
string stringToCompare = str;
string substringToSearch = substr;
char startOfSubStr;
bool wordFound = false;
//cout << stringToCompare << endl;
//cout << substringToSearch << endl;

// Mispell : Thru - Through
Thrrough


/*
stringToCompare = "Hello world"
                    j
substringToSearch = "world"
                     i
*/

//this for loop will go through the string to search for the start

for(int i = 0; i < substringToSearch.length();i++){
    //looks for first letter of the substring
    //cout << "hit first loop " << endl;
    for (int j = 0; j < stringToCompare.length();j++){
        //cout << "hit second loop " << endl;
        cout << "substring: " << substringToSearch[j] << endl;

        if (substringToSearch[j] == stringToCompare[i]){
            cout << "you have found the match." << endl;
            cout << "sub: " << substringToSearch[i] << " ";
            cout << "string: " << stringToCompare[j] << endl;
        }
    }
    

}

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    char* str = "Hello world";
    char* substr = "world";

    //strstr(const char * str, const char * substr)
	strstr(str, substr);
	//Clean end.
	cout << endl;
	return 0;
}
