import java.util.Scanner;

public class b_1924 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String inputLine = input.nextLine();
        String[] inputParts = inputLine.split(" ");

        int y = Integer.parseInt(inputParts[0]);
        int m = Integer.parseInt(inputParts[1]);

        int total = 0;

        int [] days = {31,28,31,30,31,30,31,31,30,31,30,31};

        String [] weeks = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

        for (int x = 0; x < y-1; x++) {
            total += days[x];
        }
        total += m;

        total = total % 7;
        System.out.println(weeks[total]);
    }
}