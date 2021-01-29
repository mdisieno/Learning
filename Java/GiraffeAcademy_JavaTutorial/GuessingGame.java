import java.util.Scanner;

public class GuessingGame {
    public static void main(String[] args) {
        String secretWord = "secret";
        String guess = "";
        int count = 0;
        Scanner keyboardInput = new Scanner(System.in);
        System.out.println("Welcome to the secret word game!");
        while (count < 5 && !guess.equals(secretWord)){
            System.out.print("What is your guess?: ");
            guess = keyboardInput.nextLine();
            count++;
        }
        if (guess.equals(secretWord)){
            System.out.println("You win!");
        }
    }   
}
