public class Static {
    public static void main(String[] args) {
        Song song1 = new Song("American Idiot","Green Day",300);
        Song song2 = new Song("Holiday","Green Day",400);
        

        //demonstrates they are using the same attribute within the class
        System.out.println(song1.getSongsCount());
        System.out.println(song2.getSongsCount());

    }
}
