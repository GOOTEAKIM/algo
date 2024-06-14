import java.util.Scanner;

public class b_9657 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N  = input.nextInt();

        if (N % 7 == 0 || N % 7 == 2) {
            System.out.println("CY");
        } else {
            System.out.println("SK");
        }
    }
}
