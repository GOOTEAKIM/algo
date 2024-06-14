# TIL

## JAVA

### 6/14
---
#### a, b 2개의 수를 인풋 받는 경우
- ex
    ```java
    import java.util.Scanner;

    public class Main {
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            
            int a = input.nextInt();
            int b = input.nextInt();

            System.out.println(combi(a, b));
        }

        public static int combi(int a, int b) {
            // 코드 작성
            return a / b; 

        }
    }
    ```
1. Scanner 객체로 a, b 를 input 받는다.
2. 아래에 새로운 메서드 생성, return 값 작성
3. 출력
---
#### BigInteger

- BigInteger : Java에서 큰 정수를 다룰 수 있는 클래스, 불변

- BigInteger 생성

    ```java
    BigInteger bottom = BigInteger.ONE;

    BigInteger front = new BigInteger("2400");
    BigInteger end = BigInteger.valueOf(bottom);
    ```

- BigInteger 연산

    ```java
    BigInteger sum = bigInt1.add(bigInt2); // 덧셈
    BigInteger difference = bigInt1.subtract(bigInt2); // 뺄셈
    BigInteger product = bigInt1.multiply(bigInt2); // 곱셈
    BigInteger quotient = bigInt1.divide(bigInt2); // 나눗셈(몫)
    BigInteger remainder = bigInt1.remainder(bigInt2); // 나눗셈(나머지)
    ```
- 기타 메서드:

  - BigInteger.ONE : 값이 1인 상수
  - BigInteger.ZERO : 값이 0인 상수
  - BigInteger.TEN : 값이 10인 상수

---
## Python



