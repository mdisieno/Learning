/*************************************************
 * Recursion
 * 
 * Process where function invokes itself
 * 
 * 
 * Example: sum of numbers between m:n
 * Example: (2:4) = 2+3+4 = 9
 * From video: https://www.youtube.com/watch?v=MwfvXDfaZeI
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;


/*
First run: m=2, n=4
Second run:m=3, n=4
Third run: m=4, n=4
*/
int recursionSum(int m, int n){ 
	int sum;
	if(m==n){ //False on run: 1,2 / True on run: 3
		return m;
	}else{
		//increments like the for loop with m+1
		return m + recursionSum(m+1,n);//2 +(3+(4)) = 9
	}


	//return sum;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	int m=2,n=4, sum=0;


	//solve via Loops
	for(int i=m;i<=n;i++){
		sum += i;
	}
	cout << "Sum via Loop: " << sum << endl << endl;

	//Solve via Recursion
	cout << "Sum via Recursion: " << recursionSum(m,n) << endl << endl;




	return 0;
}
