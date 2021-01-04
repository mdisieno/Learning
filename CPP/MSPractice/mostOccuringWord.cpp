/*************************************************
Author:Michael Disieno
Reason:Practicing for Microsoft Job
4. Find the most occurring word in a given text  
	Idea: pull punctuation out, split each word 
	into a hash map, and then tally up word.
**************************************************/
#include <iostream>
#include <map>
#include <stdio.h>
#include <ctype.h>
using namespace std;

string solution(string paragraph){
	//map to house unique words and coun	
	map<string, int> uniqueWords;
	string MostFrequent = "";
	string temp;
	cout << "Paragraph inserted: " << paragraph << endl << endl;
	//cout << "The Length of the paragraph is: " << paragraph.length() << endl; //CODE - check paragraph insertion
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//Remove all punctuation and drop to lowercase
	for (int i = 0;i <= paragraph.length();i++){
		//cout << i << endl; //CODE TRACE - check increment
		if(ispunct(paragraph[i])){
			//cout << "found punctuation: " << paragraph[i] << endl; //CODE TRACE - notify punctuation is found 
			paragraph.erase(i,1);
		}
		//convert all upper to lower so words are doubled
		if(isupper(paragraph[i])){
			paragraph[i] = tolower(paragraph[i]);
		}

	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//find the most used word.
		//!!!! You are here, pull words into hash map!!!!
		//find first space
		//find second space
		//pull word from inside those spaces.
		//check if word is in hash map
		//if not, add word and increment second value

		for (int i = 0;i <= paragraph.length();i++){
		if(isspace(paragraph[i])){
			//cout << "you found a space" << endl; //CODE TRACE - check for spaces
		}
		if(isalpha(paragraph[i])){

		}
	}
	//cout << paragraph << endl; //CODE TRACE - pulled out punc/
	//mostFrequent = Word with highest count
	return MostFrequent;
};

int main(){
	string paragraph = "this is a test of the giant voice system.";
	paragraph += " this is only a test. No need to be alarmed, this is just a test"; 
	paragraph +="paragraph made to test for words that are constantly used over";
	paragraph += "and over again.";
	

	cout << paragraph << endl; 
	cout << "-------------------------------------" << endl;
	solution(paragraph);
	cout << paragraph << endl; //CODE TRACE - check punc removal
	cout << "-------------------------------------" << endl;
	//cout << "The most frequent word is:  " << solution(paragraph) << endl << endl;

	//Terminate
	return 0;
}