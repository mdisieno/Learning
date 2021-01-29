public class ClassInstances {
    public static void main(String[] args) {
        //simple constructor via StudentObj
        StudentObj michael = new StudentObj("Michael Disieno", "Computer Science",3.60);
        //runs method inside class to choose response.
        if (michael.isOnHonorRoll()){
            System.out.println("Michael is on the honor roll");
        }else{
            System.out.println("Michael is not on the honor roll");
        }
    }
}
