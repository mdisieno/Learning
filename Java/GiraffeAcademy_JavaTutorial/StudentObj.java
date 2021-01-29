public class StudentObj {
    String name = "";
    String major = "";
    double grade = 0.0;
    boolean honors = false;

    public StudentObj(String name, String major, double GPA){
        this.name = name;
        this.major = major;
        this.grade = GPA;
    }

    public boolean isOnHonorRoll(){
        if(this.grade >= 3.5){
            return true;
        }else{return false;}
    }
}
