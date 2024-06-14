import java.util.Scanner;
import java.math.BigInteger;


public class b_1629 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        long a = input.nextLong();
        long b = input.nextLong();
        long c = input.nextLong();
        BigInteger result = solve(a,b,c);
        System.out.println(result);
    }

    public static BigInteger solve(long a, long b, long c) {
        BigInteger base = BigInteger.valueOf(a);
        BigInteger exponent = BigInteger.valueOf(b);
        BigInteger modulus  = BigInteger.valueOf(c);

        BigInteger result = base.modPow(exponent, modulus);

        return result;
    }
}
