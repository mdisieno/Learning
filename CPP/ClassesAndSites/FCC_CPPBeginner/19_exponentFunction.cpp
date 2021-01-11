#include <iostream>
#include <cmath>
using namespace std;

int exponent(int baseNum, int powNum){
    // use a for loop
    int result = 1;
    for(int=0, i < powNum;i++){
        result = result * baseNum;
    }
    return result;
}

int main(){
    
    int baseNum;
    int powNum;

    cout << "What would you like to be your base?: ";
    cin >> baseNum; 
    cout << endl;
    cout << "To what power?: "
    cin >> powNum;
    cout << endl;
    cout << exponent(baseNum, powNum);
	
	return 0;
}
