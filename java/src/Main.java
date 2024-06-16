import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] numbers = {5, 2, 9, 1, 5, 6};

        Arrays.sort(numbers);
        System.out.println(Arrays.toString(numbers));

        int result = numbers[2];
        System.out.println(result);
    }

}
