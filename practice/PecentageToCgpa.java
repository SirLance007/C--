import java.util.*;
public class PecentageToCgpa{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the percentage: ");
        double percentage = sc.nextDouble();
        double cgpa = percentage/9.5;
        System.out.printf("Equivalent CGPA: %.2f%n", cgpa);
    }
}