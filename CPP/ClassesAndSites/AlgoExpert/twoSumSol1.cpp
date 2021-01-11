#include <iostream>
#include <vector>
using namespace std;
/*************************************************
 * AlgoExpert Prob: TwoNumSum
 * !!!! - This program is merely for my own learning - !!!!
 * 
 * Possible Routes:
 * My Notes (Inline will have {DO - } on it.):
 * 1. Create a hash table to house the values.
 * 2. Subtract the current position within the array from the total
 * 3. Check hash table for difference from total
 * 
 * 
 * Big O : 
 *************************************************/

/**************************************************
 * Disclaimer - This is the approach I took for
 * learning, this does not mean this is the only way.
 * Some of These answers might be the same as what algo
 * uses, but you won't get the entire learning by copying
 * answers and not understanding the question. Please
 * help support clement and do the work.
 **************************************************/


//DO - returning a vector so we can provide the two numbers.
vector<int> twoNumberSum(vector<int> array, int targetSum) {

	//DO - CODE TRACE: for every number within the array....
	for (int i = 0; i < array.size() - 1; i++){
		int firstNum = array[i]; //DO - CODE TRACE: Take in the first number.
		for (int j = i + 1; j < array.size(); j++){ //DO - CODE TRACE: Then iterate:2ndNum
			int secondNum = array[j]; // DO - CODE TRACE: Take in second number.
			if (firstNum + secondNum == targetSum){ // DO - CODE TRACE: if numbers = target sum
				return vector<int>{firstNum, secondNum};// DO - CODE TRACE: return the win!
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
