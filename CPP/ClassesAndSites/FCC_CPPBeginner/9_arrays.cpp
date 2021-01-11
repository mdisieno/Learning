#include <iostream>
using namespace std;
int main(){
    //this program will hold arrays in cpp
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    int currentIndex;
    int userIndexChoice;

    cout << "Welcome to list maker." << endl;
    cout << "What index would you like to look at? = ";
    cin >> userIndexChoice;
    cout << endl;
    cout << "The index you chose is: " << luckyNums[userIndexChoice];
    cout << endl;





	return 0;
}
