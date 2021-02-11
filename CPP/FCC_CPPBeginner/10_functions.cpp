#include <iostream>
using namespace std;

void bob(string name){
    cout << "Hi I'm Bob." << endl;
    cout << "nice to meet you " << name << endl;
}


// if using a function main should be at the end.
int main(){
    string name;
	cout << "What is your name?: ";
    cin >> name;
    cout << "Say Hi Bob...." << endl;
    
    bob(name);

	return 0;
}

