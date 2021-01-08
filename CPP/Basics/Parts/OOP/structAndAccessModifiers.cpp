/*************************************************
 * StructAndAccessModifiers
 * 
 * Notes:
 * Structs and class are basically the same.
 * 
 * Via
 * https://www.youtube.com/watch?v=vJ9ezXY7efw
 *************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
/*struct and classes can do the same thing. People
choose to use structs typically for smaller structures
and classes for larger structures.

Things inside are known as members. Those members will 
have access modifiers (public, private, and protected)

c++
struct by default public
class by default private

in other languages, they are much more different.
*/

struct FartPoop{
//PODS - typically only contain var/great use NODE
//typically dont have functions.

//PUBLIC - by default
	string firstName;
	string lastName;
	string status;
	private:
		//typically methods to do this, but typically in class
		//is a great route for primary classification (car, student, etc)
		string astrologicalSign = "Cancer";
};
class PoopPoop{
	string firstName;
	string lastName;
	string status;
	string astrologicalSign = "Pisces";
	//###############################
	public:
		void namePoop(string first, string last, string stat, string astro){
			firstName = first;
			lastName = last;
			status = stat;
			astrologicalSign = astro;
		}
		void sayMyName(){
			cout << "First name: " << firstName << endl;
		}
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
	FartPoop littlePoop;
	littlePoop.firstName = "Bob";
	littlePoop.lastName = "McBob";
	littlePoop.status = "Gassy";

	cout << "First name: " << littlePoop.firstName << endl;

	//########################################################

	PoopPoop bigPoop;
	bigPoop.namePoop("Steve","McSteve","Farty","Pisces");
	bigPoop.sayMyName();
	return 0;
}
