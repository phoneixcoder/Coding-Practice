import java.util.*;

public class arrayAs {
    public static void main(String[] args){
        List list = new ArrayList();

        list.add("India");
        list.add("Pakistan");
        list.add("China");
    
        System.out.println(list.toString());

        list.remove(2);
        list.add("Japan");

        System.out.println(list.toString());

    }
}
