#include <iostream>
#include <vector>
using namespace std;

/*
!!!! - This program is merely for my own learning - !!!!
1. Create a hash table to house the values.
2. Subtract the current position within the array from the total
3. Check hash table for difference from total
*/


vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	for (int i = 0; i < array.size() - 1; i++){ // loop through the array
		//Below will be the first number to add
		int firstNum = array[i]; 
		/*below will put the next number after i and it
		increments until it finds....*/
		for (int j = i + 1; j < array.size(); j++){ //
			int secondNum = array[j];
			/*....a number that when added to the second number
			equals the Target Sum.*/
			if (firstNum + secondNum == targetSum){
				//When found, return as a vector as there are two values
				return vector<int>{firstNum, secondNum};
			}
		}
	}
  return {};
}



int main(){
	//Test input pulled from AlgoExp
	vector <int> array {3, 5, -4, 8, 11, 1, -1, 6}; 
	//Test targetSum pulled from AlgoExp
	int targetSum = 10;
	cout << "Target sum will be: " << targetSum << endl;
	//run the above method to get the solution
	vector <int> solution = twoNumberSum(array, targetSum);
	cout << "solution is: ";
	//loop through the vector to print out the solutions
	for (int i=0;i < solution.size();i++){
		/*prints each operator in the solution at index i
		 and adds a "{SPACE}" between each.*/
		cout << solution.operator[](i) << " ";
	}
	cout << endl << endl;	
	return 0;
}
