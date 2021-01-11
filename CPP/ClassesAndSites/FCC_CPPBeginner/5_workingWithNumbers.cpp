#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //typically whole numbers
    int num1 = 4;
    /*
    typically decimal numbers
    can be floats or doubles
    doubles are bigger
    */
    double num2 =  5.00;

       /*
    Operation types
    - minus
    + add
    / divide with no remainder
    % divide and give remainder
    * multiple
    () move order of op based on location

   */
    //math can be done during operation
	cout << "5 + 7 = " << 5 + 7 << endl;
    //preincrement/decrement
    ++num;
    --num;
    //post increment/decrement
    num++;
    num--;
    //shorthand math
    //does calc + assigns to num
    num += 2;
    num -= 2;
    num *= 2;
    num /= 2;

    //this will give int back, no dec
    cout << 10 / 3 << endl;
    //this will give dec back
    cout << 10 / 3.0 << endl;

    /*
    Basic Math Functions
    these can be int or double


    power function
    pow(num, raise to power of)

    square root
    sqrt(int)

    rounds to closest
    round(4.6) = 5

    automatically rounds up
    ceil(4.6) = 5   

    automatically round down
    floor(4.6) = 4

    will return which is bigger.
    fmax(3,10) = 10 will return largest
    */
	return 0;
}
