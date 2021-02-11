public class FizzBuzz {
    public static void main(String[] args) {
        String output="";
        
        System.out.println("this a simple fizzbuzz");
        System.out.println("1:100, if divisible by 3, fizz, by 4, buzz");
        System.out.println();

        //loop to iterate 1-100
        for(int i = 1;i <= 100;i++){
            //modulo 3 to check even div by 3
            if(i%3==0){
                output += "fizz";
            }
            //modulo 5 to check even div by 5
            if(i%5==0){
                output += "buzz";
            }
            //else empty
            if(output == ""){
                output = Integer.toString(i) ;
            }
        //print and reset
        System.out.println(output);
        output = "";
        }
    }
}