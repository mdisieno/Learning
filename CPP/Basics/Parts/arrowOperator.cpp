
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

struct student {
	char name[80];
	int age;
	float percentage;
//requires semi to close, same as class.
};

//create blank student struct obj.
struct student* emp = NULL;


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	emp = (struct student*);
        malloc(sizeof(struct student));
    
    emp->age = 18;
    cout << "The age of the employee is: ";
    printf("%d", emp->age);
	return 0;
}
