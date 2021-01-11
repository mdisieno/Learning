#include <iostream>
using namespace std;



int getMax (int num1, int num2, int num3){
    int result;
    // > or < or != or ==

    //if false, num 1 is smaller than num2/3
    if(num1 >= num2 && num1 >= num3){
        biggest = num1;
    //if false, num2 is smaller than 1/3
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
    //logically this is the biggest
    }else{
        result = num3;
    }

    return result;
}   
int main(){
    //this one will be for comparisons
    int num1;
    int num2;
    int num3;
    cout << "Lets enter three numbers..." << endl;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << endl;
    cout << "Now enter number 2: ";
    cin >> num2;
     cout << "Now enter number 3: ";
    cin >> num3;
    cout << endl;
    getmax(num1,num2);
    cout << "The larger number is: " << getMax();

	return 0;
}
