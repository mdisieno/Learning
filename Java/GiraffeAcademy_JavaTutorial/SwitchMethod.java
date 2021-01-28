import java.util.Scanner;
public class SwitchMethod {
    public static void main(String[] args) {
        int dayNum;
        Scanner keyboardInput = new Scanner(System.in);

        System.out.print("Enter a number (1-7): ");
        dayNum = keyboardInput.nextInt();
        System.out.println("Your day is : " + getDayName(dayNum));
        

    }
    public static String getDayName(int dayNum){
    String dayName = "";


    switch (dayNum){
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default: 
            System.out.println("That is an invalid number!");
            break;
    }

    return dayName;
    }
}
