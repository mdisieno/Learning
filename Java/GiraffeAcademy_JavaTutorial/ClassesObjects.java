import javax.swing.text.DefaultStyledDocument.ElementSpec;

public class ClassesObjects {
    public static void main(String[] args) {
        //student object that is created via studentObj class
        StudentObj michael = new StudentObj();
        //setting values for student
        michael.name = "Michael Disieno";
        michael.grade = 4.0;
        michael.major = "Computer Science";
        michael.honors = true;


        System.out.print(michael.name + " has a " + 
            michael.grade + " gpa in "+ michael.major + ". ");
        if (michael.honors){
            System.out.println(michael.name + " is a honor student");
        }else{
            System.out.println(michael.name + " is not a honor student");
        }
    }

}
