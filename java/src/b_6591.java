import java.util.Scanner;
import java.math.BigInteger;

public class b_6591 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            int n = input.nextInt();
            int k = input.nextInt();

            if (n == 0 && k == 0) {
                break;
            }

            System.out.println(combi(n, k));
        }

    }

    public static BigInteger combi(int n, int k) {
        if (k > n / 2) {
            k = n - k; // C(n, k) == C(n, n-k)
        }

        BigInteger result = BigInteger.ONE;

        for (int i = 0; i < k; i++) {
            result = result.multiply(BigInteger.valueOf(n - i)).divide(BigInteger.valueOf(i + 1));
        }

        return result;
    }
}
