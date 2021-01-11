#include <iostream>
using namespace std;


int main(){
	int age = 19;
    double gpa = 2.7;
    string name = "Mike";
    //pointer var
    int *pAge = &age;

    // &var will show the pointer its at
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

	return 0;
}
