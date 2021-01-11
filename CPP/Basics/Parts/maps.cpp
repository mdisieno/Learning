#include <iostream>
#include <map>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main(){
    //maps specify what value is key first, followed by second value.
	map<string,int> map;
    string findWord = "Bob";
    //specify what second value is based on key.
    map["Steve"] = 0;
    map["Bob"] = 0;
    map["Nick"] = 0;
    map["Jim"] = 0;

    //auto iterate, very nice
    for (auto &i : map){
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    cout << "Looking for Bob in the map:" << endl;
    for (auto &i : map){
        if(findWord == i.first){
            cout << "I found " << findWord;
            i.second++;
            cout << " and his count is: " << i.second << endl;
        }
    }


	return 0;
}
