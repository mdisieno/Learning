#include <iostream>
using namespace std;
int main(){
    string phrase = "Giraffe Academy";

    //string functions
    
    //output what is within the phrase var
    cout << phrase << endl;
    //prints out length of string
    cout << phrase.length() << endl;
    //strings can be treated as arrays/vectors
    //this can also used for assignment and more
    cout << phrase[2] << endl;
    //you can search it with find to find the index
    cout << phrase.find("ffe") << endl;
    //substring search 
    //requires 2 info = start index, end index 
    cout << phrase.substr(8,3);


	return 0;
}
