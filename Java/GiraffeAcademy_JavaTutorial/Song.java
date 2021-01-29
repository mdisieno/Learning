public class Song {
    String title;
    String artist;
    int length;
    //static class attribute, this stays put until incremented
    private static int songCount = 0;


    public Song(String title, String artist, int length){
        this.title = title;
        this.artist = artist;
        this.length = length;
        songCount++;
        System.out.println("Song count: " + songCount);
    }

    public int getSongsCount(){
        return songCount;
    }
}
