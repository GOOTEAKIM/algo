import java.util.Scanner;

public class b_10093 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long num1 = input.nextLong();
        long num2 = input.nextLong();

        if (num2 > num1) {
            System.out.println(num2-num1-1);
            for (long i = num1 + 1; i < num2; i ++) {
                System.out.print(i + " ");
            }
        } else if (num1 >num2) {
            System.out.println(num1-num2-1);
            for (long i = num2 + 1; i < num1; i++) {
                System.out.print(i + " ");
            }
        } else {
            System.out.print(0);
        }

    }
}
