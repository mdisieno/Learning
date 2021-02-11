#include <iostream>
using namespace std;


/*********************
*Bubble Sort Practice


**********************/




int main(){
	int num[7] = {7,6,5,4,3,2,1};
	int i, j;


	cout << "Starting point: ";
	//Start - CleanArrayOutput
	cout << "[";
    for(i=0;i<=6;i++){
        if(i<6){
		    cout << num[i] << ", ";
        }else{
            cout << num[i];
        }
	}
    cout << "]" << endl;
	//End - CleanArrayOutput
	cout << "--------------------------------------" << endl;





	//Bubble sort
	for(i=0;i<=5;i++){
		for(j=i+1;j<=6;j++){
			int temp = i;
			if(num[i]>num[j]){
				//create a temp hold for current number
				temp = num[i];
				//if i is bigger than j, swap j down to i
				num[i] = num[j];
				//move temp i to j, for swap.
				num[j] = temp;		
			}
		}
	}

	cout << "Ending point: ";
	//Start - CleanArrayOutput
	cout << "[";
    for(i=0;i<=6;i++){
        if(i<6){
		    cout << num[i] << ", ";
        }else{
            cout << num[i];
        }
	}
    cout << "]" << endl;
	//End - CleanArrayOutput




	return 0;
}
