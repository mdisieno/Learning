#include <iostream>
using namespace std;

int main(){
    int numberGrid [3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };

    //iterats through all internal arrays
    for (int i = 0;i < 3; i++){
        //iterates through internal indices w/n arrays
        for (int j = 0; j < 2;j++){
            cout << numberGrid[i][j];
          

        }
        //outside the loop to keep pairs together.
        cout << endl;
    }

	return 0;
}
