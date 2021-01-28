public class Strings {
    public static void main(String[] args) {
        String giraffe = "Giraffe Academy";
        String newGiraffe = "Giraffe\n Academy";
        String quoteGiraffe = "Giraffe \"Academy\"";
        //replys with a boolean
        boolean containsString = giraffe.contains("Academy");


        System.out.println("Giraffe Academy "
                            + "is the coolest!");
        System.out.println(giraffe.toUpperCase());
        System.out.println(giraffe.toLowerCase());
        System.out.println(containsString);
        //returns letter at index
        System.out.println(giraffe.charAt(2));
        //returns index of letter
        System.out.println(giraffe.indexOf('f'));
        
    }
}
