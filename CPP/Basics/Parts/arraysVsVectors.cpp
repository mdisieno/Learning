#include <iostream>
//requires include for vectors
#include <vector>
using namespace std;
/********************************************
 * Arrays=
 * specific num of values, 
 * must specify
 * type and number of values.
 * memory efficient 
 * lower level

 * Vectors=
 * dynamically sized
 * consumes more memory
 * sequential containers
********************************************/

int main(){
    int array[5] = {1,2,3,4,5};
    vector<int> vector = {1,2,3,4,5};
    cout << "Print vector: ";
    cout << vector.size() << endl << endl;

    //Print out array
    for (int i = 0;i<=array.length;i++){
        if (i == 0){
            cout << "\{";
            cout << i << ",";
        }else if (i == array.length{
            cout << i << ",";
            cout << "\}";
        }else{
            cout << i << ",";        
        }
    }


    //Print out Vector
    for (int i = 0;i<=vector.size();i++){
        if (i == 0){
            cout << "\{";
            cout << i << ",";
        }else if (i == vector.size()){
            cout << i << ",";
            cout << "\}";
        }else{
            cout << i << ",";        
        }
    }
    cout << endl << endl;
	return 0;
}
