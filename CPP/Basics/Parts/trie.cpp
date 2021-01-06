
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node{

};

class Trie{
    Trie* children[26];
    char c;
    bool isWord;
    
    public:
        Trie(char c){
            isWord = false;
            for (int i; i < 26;i++){
                children[i] = nullptr;
            }
        }
};

void insert(string input){

}

bool startsWith(string prefix){

}

bool search(string input){
    vector<string> words;
    bool isItThere = false;
    cout << "The word you'll be checking is: " << input << endl;


}


int main(){
    string input;
    bool repeat = true;
    while (repeat){
        cout << "What would you like to check?: ";
        cin >> input;
        //solution(input);
        if (search(input)){
            cout << "Congrats the word is there. ";
            cout << "Would you like to try another? (Y/N): ";
            cin >> input;
            if (input == "y" || input =="Y"){
                repeat = true;
            }else{
                input = false;
            }
        }else{
            cout << "Sorry, the word is not there. ";
            cout << "Would you like to try another? (Y/N): ";
            cin >> input;
            if (input == "y" || input =="Y"){
                repeat = true;
            }else{
                input = false;
            }
        }
    }
	return 0;
}
