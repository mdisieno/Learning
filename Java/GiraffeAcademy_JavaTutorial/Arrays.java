public class Arrays {
    public static void main(String[] args) {
        //Brackets specify array of datatype
        String [] friends = {"Bob", "Steve", "Mark"};

        //simple loop through array to print all friends.
        for(int i = 0; i < friends.length;i++){
            System.out.print(friends[i]);
            //space friends
            System.out.print(" ");
            System.out.print("");
        }
        System.out.println();
        //changing friend 1 to Jim instead of steve.

        friends[1] = "Jim";

        //simple loop through array to print all friends.
        for(int i = 0; i < friends.length;i++){
            System.out.print(friends[i]);
            //space friends
            System.out.print(" ");
            System.out.print(" ");
        }
        System.out.println();
    }
}
