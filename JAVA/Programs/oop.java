public class oop {
    public static void main(String[] args) {
        class User {
            int score;

            public boolean hasWon(){
                if(score >= 100){
                    return true;
                }
                else{
                    return false;
                }
            }
        }

        User bob = new User();
        bob.score = 100;
        System.out.println(bob.hasWon());
    }
}
