import java.util.*;

public class array {
    public static void main(String[] args){
        // int [] primeNum = {1 , 2 , 3 , 5 , 7};
        // System.out.println(primeNum[2]);
        // System.out.println(primeNum[0]);
        // System.out.println(primeNum[4]);
        // System.out.println(primeNum.length);


        List list = new ArrayList();

        list.add(2);
        list.add(1);
        list.add(3);
        list.add(5);
        list.add(7);

        list.remove(2);

        System.out.println(list.get(2));
        System.out.println(list.toString());
    }
}
