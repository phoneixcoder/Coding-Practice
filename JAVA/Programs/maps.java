import java.util.*;
public class maps {
     public static void main(String[] args) {
        Map map = new HashMap();
        map.put("Father", "Rob");
        System.out.println(map.get("Father")); 
        map.put("Mother", "Tilak");
        System.out.println(map.get("Mother"));

        System.out.println(map.toString());
        System.out.println(map.size());
    }
}
