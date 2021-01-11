#include <iostream>
using namespace std;
int main(){
    bool fartPoop = true;
    char userAnswer;

    cout << "Prepare for the Noise" << endl;
    while(fartPoop){
        cout << "pfffffffttttttt...." << endl;
        cout << "Had enough yet? (Y or N): ";
        cin >> userAnswer;
        if (userAnswer == 'Y' ||| userAnswer == 'y')
        {
            fartPoop = false;
        }else{
            cout << "You asked for it...." << endl;
        }
    }

	return 0;
}
