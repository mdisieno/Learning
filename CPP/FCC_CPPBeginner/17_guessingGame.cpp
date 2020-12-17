#include <iostream>
using namespace std;
int main(){
    int secretNum = 7;
    int guess;
    int guessCount = 0;

    while(guess != secretNum && guessCount < 7){
        cout << "What do you think the secret number is?: ";
        cin >> guess;
        cout << endl;
        guessCount++;
    }
    if (guessCount < 7){
        cout << "Woot, good guess." << endl;
    }else{
        cout << "Sorry bud, you lose." << endl;
    }
  
	
	return 0;
}
