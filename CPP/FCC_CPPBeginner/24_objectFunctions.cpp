#include <iostream>
using namespace std;

//Objects are typically capped
class Student {
    public:
        string name;
        string major;
        double gpa;


    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors(){
        if (gpa >= 3.5){
            return true;
        }
        return false;
    }

};


int main(){
	    
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);
    

    if (student1.hasHonors() = true){
        cout << "Jim has honors." << endl;
    }else if(student2.hasHonors() = true){
        cout << "Pam has honors." << endl; 
    }

	return 0;
}
