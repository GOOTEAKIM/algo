import java.math.BigInteger;
import java.util.Scanner;

public class b_2407 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String line = input.nextLine();

        String[] tokens = line.split(" ");

        int n = Integer.parseInt(tokens[0]);
        int m = Integer.parseInt(tokens[1]);

        System.out.println(combi(n, m));
    }

    public static BigInteger combi(int n, int m) {

        BigInteger top = BigInteger.ONE;
        BigInteger bottom = BigInteger.ONE;

        for (int front = n; front > n - m; front--) {
            top = top.multiply(BigInteger.valueOf(front));
        }

        for (int end = 1; end <= m; end++) {
            bottom = bottom.multiply(BigInteger.valueOf(end));
        }

        return top.divide(bottom);
    }
}
