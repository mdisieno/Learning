#include <iostream>
using namespace std;
int main(){

    string color, pluralNoun, celebrity;
    
    cout << "Enter a color, plural noun, and celebrity":
    cout << "separated by spaces." << endl;
    getline(cin, color);
    getline(cin, pluralNoun);
    getline(cin,celebrity);
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
	
	return 0;
}
