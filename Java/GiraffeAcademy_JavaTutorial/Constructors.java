public class Constructors {
    public static void main(String[] args) {
        //creating first book using constructor
        Book book1 = new Book("Moby Dick", "Steve", 40, "English");

        //pulls those variables assigned by the above constructor to show it works
        System.out.println(book1.bookTitle +" written by " + book1.bookAuthor + " has " + 
        book1.bookPages + " pages and is written in " +  book1.bookLanguage + ".");
    }
}
