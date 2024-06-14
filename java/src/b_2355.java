
import java.util.Scanner;

public class b_2355 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String line = input.nextLine();

        String[] tokens = line.split(" ");

        long A = Long.parseLong(tokens[0]);
        long B = Long.parseLong(tokens[1]);

        System.out.println(sigma(A, B));
    }

    public static long sigma(long A, long B) {
        if (A >= B)
            return (A + B) * (A - B + 1) / 2;
        else
            return (B + A) * (B - A + 1) / 2;
    }
}
