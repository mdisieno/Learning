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
	map<string, int> uniqueWords;
	string mostFrequent = "";
	string word = "";
	int maxCount = 0;

	//cout << "Paragraph inserted: " << paragraph << endl << endl;
	//cout << "The Length of the paragraph is: " << paragraph.length() << endl; //CODE - check paragraph insertion
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//1.Remove all punctuation and drop to lowercase
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

		//2.Pull out words from spaces
		for (int i = 0;i <= paragraph.length();i++){
			if(isspace(paragraph[i])){
				//cout << "you found a space" << endl; //CODE TRACE - check for spaces
				//cout << word << endl;
				//iterate through map to check word
				//if word is not found
				if (uniqueWords.find(word) == uniqueWords.end()){
					//!!!!-Not incrementing-!!!!
					uniqueWords[word]++;
					cout << word << " at " << uniqueWords[word] << endl << endl;
					
					//Set mostFrequent to next
					
					//if max count is currently less than the second val in uniqueWord
					if(maxCount < uniqueWords[word]){
						//now make the next word maxCount
						maxCount = uniqueWords[word];
						mostFrequent = word;
						//!!!!-How to print out second value-!!!!
						//cout << mostFrequent << " is " << uniqueWords[word].second;
					}
				}
				word = "";
			}else{
				word = word + paragraph[i];
			}
		}
		cout << word << endl;
	//cout << paragraph << endl; //CODE TRACE - pulled out punc/
	cout << "Most frequent word is: " << mostFrequent << endl;
	return mostFrequent;
};

int main(){
	string paragraph = "This is a test of the giant voice system.";
	paragraph += " This is only a test. No need to be alarmed, this is just a test "; 
	paragraph +="paragraph made to test for words that are constantly used over ";
	paragraph += "and over again.";
	

	cout << "Paragraph beforehand: " << paragraph << endl; //CODE TRACE - checking input
	cout << "-------------------------------------" << endl;
	solution(paragraph);
	//cout << paragraph << endl; //CODE TRACE - check punc removal
	cout << "-------------------------------------" << endl;
	//cout << "The most frequent word is:  " << solution(paragraph) << endl << endl;

	//Terminate
	return 0;
}