/*************************************************
 * AlgoExpert Prob: 
 * !!!! - This program is merely for my own learning - !!!!
 * 
 * Possible Routes:
 * 
 * 
 * My Notes (Inline will have {DO - } on it.):
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
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};
//take in the tree, the target value needed, and the closest value
int findClosestValueInBst(BST *tree, int target) {
	return findClosestValueInBstHelper(tree,target,tree->value);
}


int findClosestValueInBstHelper(BST *tree, int target, int closest) {
  // Write your code here.
	if (tree != NULL){
		if (abs(target - closest) > abs(target - tree->value)){
			return findClosesValueInBstHelper(tree->left, target, closest);			
		}else if (target > three-value && tree-> != NULL){
			return findClosestValueInBstHelper(tree->right,target,closest);
		}else{
			return closest;
		}
	}
}






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	
	//Clean end.
	cout << endl;
	return 0;
}
