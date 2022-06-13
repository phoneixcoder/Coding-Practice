import java.util.Arrays;
public class StringManu {
    public static void  main(String[] args) {
        String myString = "Nick x Sean x Fido x sara";
        String[] splitString = myString.split(" x ");
        System.out.println(Arrays.toString(splitString));
    }
}
