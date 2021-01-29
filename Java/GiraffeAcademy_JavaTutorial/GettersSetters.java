public class GettersSetters {
    public static void main(String[] args) {
        Movie movie1 = new Movie("The Avengers","Joss Whedon","PG-13");
        Movie movie2 = new Movie("Step Brothers","Adam McKay","R");
        Movie movie3 = new Movie("Fake Movie","Steve","Dog");


        //for giggles, I tried to use a string to create the name an iterate through the objs
        for (int i = 1; i <= 3; i++){
            String whichMovie = "movie"+i;
            System.out.println(whichMovie.title + " is rated " + whichMovie.rating);
        }
        
    }
}
