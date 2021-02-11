#include <iostream>
#include <cmath>
using namespace std;


int cuber(int numToCube){
    return pow(numToCube,3);
}


int main(){
    int number;
	cout << "What number do you want to cube?:";
    cin >> number;
    cout << endl; 
    cout << "Your answer is " << cuber(number) << endl;
	return 0;
}
