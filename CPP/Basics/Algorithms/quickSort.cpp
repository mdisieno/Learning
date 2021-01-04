#include <iostream>
#include <cmath>
using namespace std;
/*********************
*Quick Sort Practice

Split Sort:
1.Designate Pivot
2.Move respective i and j on either side of pivot
3.Split array into two partitions
4.Associate Pivot and Sorts

Ex Flow:


[3 7 8 2 1]

Pivot 


*********************/





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int partition(int arrayToSort[], int left, int right, int pivot){
    int temp;
    while(left <= right){
        while(arrayToSort[left] < pivot){
            //this is correct as it should be less than pivot
            //move down to the next element
            left++;
            cout << "left";
        }
        while(arrayToSort[right] > pivot){
            //this is correct as it should be greater than pivot
            //move down to the next element
            right--;
            cout << "right";
        }
        //!!!! GETTING STUCK IN HERE
        if(left <= right){
            swap(arrayToSort[left], arrayToSort[right]);
            left++;
            right--;
        }
    }
    return left;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void quickSort(int arrayToSort[],int left, int right){
    int pivot = floor((sizeof(arrayToSort)) / 2);

    int index = partition(arrayToSort, left, right, pivot);
    //QuickSort Alg
    if(left >= right){
        return;
    }
    quickSort(arrayToSort,left,index - 1);
    quickSort(arrayToSort,index,right);

}
//---------------------------------------------------------------
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
    quickSort(num, 0, (sizeof(num)-1));
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
