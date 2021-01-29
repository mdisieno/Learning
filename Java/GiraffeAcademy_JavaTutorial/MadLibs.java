import java.util.Scanner;
class MadLibs {
    public static void main(String[] args) {
        String adj = "";
        String noun = "";
        String color = "";
        String plurNoun = "";
        Scanner keyboardInput = new Scanner(System.in);

        System.out.print("Give me an adjective: ");
        adj = keyboardInput.nextLine();
        
        System.out.println();
        System.out.print("Give me a noun: ");
        noun = keyboardInput.nextLine();

        System.out.println();
        System.out.print("Give me a color: ");
        color = keyboardInput.nextLine();

        System.out.println();
        System.out.print("Give me a plural noun: ");
        plurNoun = keyboardInput.nextLine();
        System.out.println();

        //Madlib print
        System.out.println("Roses are "+ color + ".");
        System.out.println(plurNoun + " are blue.");
        System.out.println("I love " + adj + " " + noun);
    }
}