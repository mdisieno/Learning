#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
};

int main(){
	
    //person
    string name = "Mike";
    double pi = 3.14;
    char favoriteLetter = 'G';


    //Book Creation
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;


    //Book Creation
    Book book2;
    book2.title = "Lord of The Rings";
    book2.author = "Tolkien";
    book2.pages = 700;

    cout << "The Author of Book 1 is " << book1.author << endl;
    cout << "The Author of Book 2 is " << book2.author << endl;
    

	return 0;
}
