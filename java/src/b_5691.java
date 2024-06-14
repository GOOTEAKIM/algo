import java.util.Scanner;

public class b_5691 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            String line = input.nextLine();

            String[] tokens = line.split(" ");

            int a = Integer.parseInt(tokens[0]);
            int b = Integer.parseInt(tokens[1]);

            if (a == 0 && b == 0) {
                break;
            }

            int c = findC(a,b);
            System.out.println(c);
        }

    }

    public static int findC(int a, int b) {
        return 2 * a - b;
    }
}
