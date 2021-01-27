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
        //concatenation for the print
        System.out.println("Welcome " + name + "!");
    }
}
