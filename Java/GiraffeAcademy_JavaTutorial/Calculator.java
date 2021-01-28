import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        //Components
        double firstNum, secondNum, solution = 0;
        String operation;
        Scanner keyboardInput = new Scanner(System.in);

        //Workflow
        System.out.print("What is your first number?: ");
        firstNum = keyboardInput.nextInt();
        System.out.println();
        System.out.print("What is your second number?: ");
        secondNum = keyboardInput.nextInt();
        System.out.println();
        System.out.print("What operation?: ");
        operation = keyboardInput.next();
        switch (operation){
            case "+":
                solution = firstNum + secondNum;
            case "-":
                solution = firstNum - secondNum;
                break;
            case "/":
                solution = firstNum / secondNum;
                break;
            case "*":
                solution = firstNum * secondNum;
                break;
        }
        System.out.println("The solution is: " + solution);


        }



}

