public class Class {
    public static void main(String[] args) {
        class Number{
            int integer;

            public boolean isPositive() {
                if (integer > 0) {
                    return true;
                }else{
                    return false;
                }
            }
        }
        Number num = new Number();
        num.integer = -1;
        System.out.println(num.isPositive());
    }
}
