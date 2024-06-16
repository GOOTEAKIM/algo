# TIL_Java

## Java

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

### 6/15
---
#### pow

- pow : 제곱할 수 있는 메서드
  - `Math.pow(a,b)`
  - a^b 를 의미한다.

  ```java
  public class Main {
      public static void main(String[] args) {

          int base = 2;
          int exponent = 3;

          int intResult = (int) Math.pow(base, exponent); // 2^3 = 8

          System.out.println(intResult); // 8
      }
  }

  ```
---

### 모듈러 (== 나머지)

- `a mod m`
  - a : 원래 값
  - m : 나누려는 수
  - a mod m : a % m 이랑 같다.
---
### BigInteger 에서 제곱수 계산

```java
import java.math.BigInteger;

public class BigIntegerPowExample {
    public static void main(String[] args) {

        BigInteger base = new BigInteger("2");
        int exponent = 10;

        BigInteger result = base.pow(exponent);
        System.out.println(result);  // 출력: 1024
    }
}

```

- `BigInteger result = base.pow(exponent)`
  - base : 밑
  - exponent : 지수
  - result : 계산한 값
---

### BigInteger 에서 제곱수 모듈러 계산
---
#### modPow
---

```java
import java.math.BigInteger;

public class BigIntegerModPowExample {
    public static void main(String[] args) {

        BigInteger base = new BigInteger("10");
        BigInteger exponent = new BigInteger("11");
        BigInteger modulus = new BigInteger("12");

        BigInteger result = base.modPow(exponent, modulus);
        System.out.println("Result: " + result);
    }
}
```
- `BigInteger result = base.modPow(exponent, modulus);`
  - base : 밑
  - exponent : 지수
  - modulus : 모듈러
  - result : 결과 값
---

### 6/16
---
#### 배열 정렬

```java
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] numbers = {5, 2, 9, 1, 5, 6};

        Arrays.sort(numbers);
        System.out.println(Arrays.toString(numbers));
    }
}

```

1. import java.util.Arrays;
2. 배열 생성
3. Arrays.sort(`배열 이름`);
4. 배열을 출력한다 : System.out.println(Arrays.toString(`배열 이름`));
   - 배열 내의 특정 숫자를 출력하고 싶으면 새로운 변수를 할당 해서 출력해야한다.
---