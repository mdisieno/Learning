//add scanner package for input
import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        //user input - oddly more complicated then CPP
        Scanner scanner = new Scanner(System.in);
        //without import
        //java.util.Scanner scanner = new java.util.Scanner
        System.out.println("What is your name?: ");
        //take input to string from scanners new line
        String name = scanner.nextLine();
        //easier way without having to pull the new obj
        //below is a literal = value within variable
        String easier = "Wow, that was easy.";
        //concatenation for the print. Technic'ly an expression below
        System.out.println("Welcome " + name + "! " + easier);
    }
}
