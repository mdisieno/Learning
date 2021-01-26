public class Variables {
    public static void main(String[] args) {
        char a = 'A';
        String name = "name";
        int number = 1_000_000;
        
        boolean trueOrFalse = true;

        //float is good for 7 dec, double 15
        float pi = 3.14F;
        double money = 1.242;

        //primitive data types
        byte theByte;

        //Special
        //LocalDate now = LocalDate.now();

        System.out.println(a + " " + name + " " + number + " " + money);
        System.out.println(name.toUpperCase());
        
    }
}
