/*****************************************
 * Java Streams Practice
 * 
 * 
 * 
 * Via:
 * https://www.youtube.com/watch?v=FWoYpM-E3EQ
 ******************************************/




//import lists to parse lists through Java streams
import java.util.*;


//class person to test the stream with 
class Person {
    String name;
    int billions;
    public Person(String name, int billions){
        this.name = name;
        this.billions = billions;
    }

}




class StreamsPractice1 {
    public static void main(String[] args) {
        List<Person> people = new ArrayList<>();

        people.add(new Person(name: "Warren Buffett", billions: 120));
        people.add(new Person(name: "Jeff Bezos", billions: 150));
        people.add(new Person(name: "Bill Gates", billions: 100));
        people.add(new Person(name: "Mark Zuckerberg", billions: 50));

    }
}

