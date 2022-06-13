import java.util.*;

public class Student{
    private String name;
    private int age;
    private String city;

    public Student(String name, int age, String city){
        this.name = name;
        this.age = age;
        this.city = city;
    }

    public void printData(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("City: " + city);
    }
    public static void main(String[] args) {
        
        Student s1, s2;
        s1 = new Student("John", 20, "New York");
        s2 = new Student("Jane", 21, "New York");
        s1.printData();
        s2.printData();
    }
}


