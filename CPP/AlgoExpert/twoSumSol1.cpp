#include <iostream>
#include <vector>
using namespace std;

/*
//!!!! - Get a Better Understanding of Work Through - !!!!

1. Create a hash table to house the values.
2. Subtract the current position within the array from the total
3. Check hash table for difference from total
*/


vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	for (int i = 0; i < array.size() - 1; i++){ // loop through the array
		int firstNum = array[i]; //Place the point for i
		for (int j = i + 1; j < array.size(); j++){ //
			int secondNum = array[j];
			if (firstNum + secondNum == targetSum){
				return vector<int>{firstNum, secondNum};
			}
		}
	}
  return {};
}



int main(){
	vector <int> array {3, 5, -4, 8, 11, 1, -1, 6}; 
	int targetSum = 10;
	cout << "Target sum will be: " << targetSum << endl;
	vector <int> solution = twoNumberSum(array, targetSum);
	cout << "solution is: ";
	for (int i=0;i < solution.size();i++){
		cout << solution.operator[](i) << " ";
	}
	cout << endl << endl;	
	return 0;
}
