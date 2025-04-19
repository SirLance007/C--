import java.util.Scanner;
public class hasNextInt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(hasnextInt(sc) == true) {
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }

    public static boolean hasnextInt(Scanner sc) {
        return sc.hasNextInt();
    }
}
