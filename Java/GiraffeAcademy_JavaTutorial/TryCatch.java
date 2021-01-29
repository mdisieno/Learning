import java.util.InputMismatchException;
import java.util.Scanner;
public class TryCatch {
    public static void main(String[] args) {
        int dogAge = 0;
        Scanner keyboardInput = new Scanner(System.in);
        System.out.print("Put in the age of a dog: ");
        try{
            dogAge = keyboardInput.nextInt();
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Out of bounds bud");
        }catch(InputMismatchException e){
            System.out.println("How about we put a number in there?");
        }
        


    }
}
