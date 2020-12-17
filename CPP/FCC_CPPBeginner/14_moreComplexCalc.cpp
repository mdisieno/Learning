#include <iostream>
using namespace std;
int main(){
	int num1, num2;
    char op;

    //prompt user and explain
    cout << "Welcome to the better calc:" << endl 
    << "This calc will adjust and put the largest "
    << "first for - or /" << endl

    //user prompt and input
    << "enter first number: ";
    cin >> num1;
    cout << endl << "enter second number: ";
    cin >> num2;
    
    cout << endl << "what operation would you like to do?: ";
    cin >> op;
    if(op == '+'){
        num1 + num2;
    }else if(op == '-'){
        if (num2 > num1){
             num2 - num1;
        }else{
             num1 - num2;
        }
       
    }else if(op == '/'){
        if (num1 > num2){
            num1 / num2;
        }else{
           num2 / num1; 
        }
        
    }else if (op == "*"){
        num1 * num2;
    }else{
        cout << "Invalid operator"
    }

	return 0;
}
