#include <vector>
using namespace std;

/*
!!!! - This program is merely for my own learning - !!!!
1. Create a hash table to house the values.
2. Subtract the current position within the array from the total
3. Check hash table for difference from total
*/

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	unordered_set<int> nums; //create the unordered set to hold it

	for (int num : array){ //For every num within the array....
		int potentialMatch = targetSum - num; //set potentialMatch = Total - current num
		if (nums.find(potentialMatch) != nums.end()){ //if you are able to find potential match in nums 
			return vector<int>{potentialMatch, num}; //if you find it, return the potential match and the point in num
		}else{
			nums.insert(num);//else, insert num inside the nums hash
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
