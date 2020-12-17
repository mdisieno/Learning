#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        //Constructor
        //Just a method inside of of an object for 

        Book(){
            title = "NoTitle";
            author = "NoAuthor";
            pages = 0;
            cout << "Book with no name created." << endl;
        }
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            cout << "Creating Object named: " << aTitle << endl;
        }
};

int main(){
	
    //person
    string name = "Mike";
    double pi = 3.14;
    char favoriteLetter = 'G';


    /*Constructors expedite creation of an object, in a much 
    cleaner fashion, within the creation of the object. */

    //Book1 Creation
    Book book1 ("Harry Potter","JK Rowling",500);
    //Book2 Creation
    Book book2 ("Lord of the Rings", "Tolkien",700);
    //Book3 Creation
    Book book3();

    cout << "The Author of Book 1 is " << book1.author << endl;
    cout << "The Author of Book 2 is " << book2.author << endl;
    

	return 0;
}
