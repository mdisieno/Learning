public class Movie {
    String title;
    String director;
    String rating;
    public Movie(String title, String director, String rating){
        this.title = title;
        this.director = director;
        if (rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R"){
            this.rating = rating;
        }else{
            this.rating = "NR";
        }
        //getters typically get values for the user IE getTitle()
        //setters typically set values for the user IE setTitle(String Title)
    }

}
