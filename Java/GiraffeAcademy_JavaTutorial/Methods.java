public class Methods {
    //returns string for the response. Takes in name
    public static String returnString(String name){
        String hello = ("Hey " + name + "!");
        return hello;
    }
    //no return, just void for simple operation. 
    public static void sayHi(){
        System.out.println("I am a robot");
    }
    public static void main(String[] args) {
        String name = "Bob";
        //uses return to output response
        System.out.println(returnString(name));
        sayHi();
    }
}
