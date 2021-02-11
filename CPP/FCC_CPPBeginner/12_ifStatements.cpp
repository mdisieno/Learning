#include <iostream>
using namespace std;
int main(){
	
    bool isMale = true;
    bool isTall = true;

    cout << "What sounds do you make?" << endl;
    //tests against isMale value
    if(isMale == true){
        cout << "Fart poop doodie" << endl;
    }else if(isMale == false){
        //alternative conditions are != true
        cout << "Queef Queef" << endl;
    }

    cout << "Are you tall?"

    // && - both true to true / || - one true to true


    //evaluate as true if both are true.
    if (isMale && isTall){
        cout << "Really high farts" << endl;
    }else if (isMale && !isTall){
        cout << "tiny farts" << endl;

    }else if (!isMale && isTall){
        cout << "tiny queefs" << endl;
    }else{
        cout << "Really high queefs" << endl;
    }
	return 0;
}
