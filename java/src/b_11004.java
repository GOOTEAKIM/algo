import java.util.Scanner;
import java.util.Arrays;

public class b_11004 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int k = input.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextInt();
        }

        Arrays.sort(arr);

        int result = arr[k-1];

        System.out.println(result);

    }

}
