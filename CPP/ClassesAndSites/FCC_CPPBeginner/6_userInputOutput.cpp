#include <iostream>
using namespace std;
int main(){
    int age;
    string name;

    //cout = console output
    cout << "What is your age? = ";
    //cin = console input (no string)
    cin >> age;
    cout << endl;
    cout << "You are " << age << " years old." << endl;

    cout << "~~~~~~~~~~~~" << endl;


    //string input
    cout << "Input your name ";
    getline(cin, name);
    cout << endl;
    cout << "your name is " << name << endl;
	return 0;
}
