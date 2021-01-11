#include <iostream>
using namespace std;

class Movie {
    private:
        string rating;
    //all of this is public and accessible
    //any other code can access/modify it
    public:
        string title;
        string director;
        
        Movie (string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        void setRating(string aRating){
            if(aRating == "G"|| aRating =="PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }   
        }

        string getRating(){
            return rating;
        }
};

int main(){ 
    Movie avengers("The Avengers","Joss Whedon","PG-13");
    cout << "The Rating for " << avengers.title << " is " << avengers.getRating() << endl;
	return  0;
}
