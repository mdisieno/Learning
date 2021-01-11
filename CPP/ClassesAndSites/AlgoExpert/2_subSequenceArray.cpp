/*************************************************
 * AlgoExpert Prob: 
 * !!!! - This program is merely for my own learning - !!!!
 * 
 * Possible Routes:
 * Set j to lastMatchIndex to continue moving forward
 * as it needs to be in order.
 * 
 * My Notes (Inline will have {DO - } on it.):
 * So close to having it, only failing :
 * {"array": [1, 1, 1, 1, 1], "sequence": [1, 1, 1]}
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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
/*Fails {"array": [1, 1, 1, 1, 1], "sequence": [1, 1, 1]}
1. Last match point works, but fails on following as all 1s.
2. Make J lastMatch index.
*/ 	

    int firstNum = 0; //finds first number in sequence.
    int secondNum = 0; //finds second numger in array.
    int lastMatchIndex = 0;
	//int lastMatchValue = 0;
    int trueOrFalseCount = 0;
	
    //cout << "sequence size: " << sequence.size();
    //cout << " array size: " << array.size() << endl;

    //DO - CODETRACE: go through each value within the vector
    for(int i = 0; i <= sequence.size()-1;i++){
        firstNum = sequence[i];
        for(int j = lastMatchIndex;j <= array.size()-1;j++){
            secondNum = array[j];
            if (firstNum == secondNum){
				//seems to be breaking here.
//WORKING HERE
                if (j > lastMatchIndex){//DO-CODETRACE:Check point of lastIndex to push foward
                    lastMatchIndex = (j+1);
                    trueOrFalseCount++;
                }else if (j == lastMatchIndex && lastMatchIndex != -1){
                    cout << "Duplicate Found/";
                }else{
                    cout << "Not in order/";
                }
//WORKING HERE
                //array[j]=NULL;
                cout << "True: ";
                cout << "i=" << i;//DO - Code Trace
                cout << " j=" << j;
                cout << " /First Num: " << firstNum;//DO - Code Trace
                cout << " /Second Num: " << secondNum;//DO - Code Trace
				cout << endl;
                break; //DO - Code Trace - No need to continue, its there
            }else{
                cout << "False: ";
                cout << "i=" << i; //DO - Code Trace
                cout << " /First Num: " << firstNum; //DO - Code Trace
                cout << " /Second Num: " << secondNum; //DO - Code Trace
				cout << endl;
            }
        }
    }
    if(trueOrFalseCount == sequence.size()){
        return true;
    }else{
		return false;
		}
}


int main(){
    /* Failed Test Cases:

    Test 9:    
    {"array": [1, 1, 1, 1, 1], "sequence": [1, 1, 1]}
    */



    vector<int> array = {1, 1, 1, 1, 1};
    vector<int> sequence = {1, 1, 1};
	//Clean end.
    if (isValidSubsequence(array,sequence))
    {
        cout << endl << "True" << endl;
    }else{
        cout << endl << "False" << endl;
    }
    
	cout << endl;
	return 0;
}
