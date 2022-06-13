import java.util.*;

public class loop {
    public static void main(String[] args) {
        // int n = 0;
        // for(int i = 1; i <= 10; i++){
        //     n = n + i;
        //     System.out.println(n);
        // }

        // String[] family = {"Tilak", "Father", "Mother", "Sister"};
        
        List<String> family = new ArrayList<String>();
        family.add("Tilak");
        family.add("Dev");
        family.add("Shubhangi");
        family.add("Gargi");

        for (String name : family){
            System.out.println(name);
        }
    }
}
