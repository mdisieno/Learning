#include <iostream>
using namespace std;


string getDayOfWeek(int dayNumber){
    string dayName;


    //like an if, but checks for multiple inputs.
    switch(dayNumber){
        case 1:
            dayName = "Sunday";
            break;
        case 2:
            dayName = "Sunday";
            break;
        case 3:
            dayName = "Sunday";
            break;
        case 4:
            dayName = "Sunday";
            break;
        case 5:
            dayName = "Sunday";
            break;
        case 6:
            dayName = "Sunday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default:
            cout << "I said 1-7 nerd...." << endl;
            break;
    }


    return dayName;
}

int main(){
    int dayNumber;

    cout << "Write 1-7 to choose a day of the week: ";
    cin >> dayNumber;
    cout << endl;
    cout << "Your day is: " << getDayOfWeek(dayNumber);

	
	return 0;
}
