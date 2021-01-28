//required to import so that we can use scanner
import java.util.Scanner;

public class UserInput {
    public static void main(String[] args) {
        //scanner is needed to allow input pull
        Scanner keyboardInput = new Scanner(System.in);
        //Just print so it doesnt create a new a line.
        System.out.print("Enter your name: ");
        String name = keyboardInput.nextLine();
        System.out.println("Hey " + name);
    }
}
