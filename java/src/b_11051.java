import java.util.Scanner;
import java.math.BigInteger;

public class b_11051 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String line = input.nextLine();

        String[] tokens = line.split(" ");

        int n = Integer.parseInt(tokens[0]);
        int k = Integer.parseInt(tokens[1]);

        System.out.println(combi(n, k));
    }

    public static BigInteger combi(int n,int k) {
        BigInteger top = BigInteger.ONE;
        BigInteger bottom = BigInteger.ONE;

        for (int front = n; front > n-k; front--) {
            top = top.multiply(BigInteger.valueOf(front));
        }

        for (int end = 1; end <= k; end++) {
            bottom = bottom.multiply(BigInteger.valueOf(end));
        }

        return (top.divide(bottom)).remainder(BigInteger.valueOf(10007));
    }
}
