# 구름 기초 트레이닝 리뷰

- **g_174732 대소문자 바꾸기**
    
    ```C++

    char spell = 'a';
    char speel = 'A';

    if (islower(spell)) // spell 이 소문자인지 bool로 판단
    if (isupper(speel)) // speel 이 대문자인지 bool로 판단

    speel = tolower(speel); // 대문자인 speel을 소문자로 변경 -> a
    spell = toupper(spell); // 소문자인 speel을 대문자로 변경 -> A

    ```

- **g_174704 A+B (2)**

  - **소수점 몇번째 짜리까지 출력**

    ```C++

    #include <iomanip> // 라이브러리 호출

    cout << fixed << setprecision(출력하고자 하는 자리 수) << 출력 대상;

    ```

- **g_174805 숫자 제거 배열**

  - 문자열의 특정 부분 추출 
    
    ```C++
    
    #include<string>

    using namespace std;
    
    string greeting = "hello";

    int n = 3;

    string slice = greeting.subtr(0,n); // subtr(슬라이싱 시작 idx, 슬라이싱 길이)

    // slice = "hel"

    ```

- **g_175880 큰 팩토리얼**

  - int 크기 : **±2 × 10⁹**
  - long long 크기 : **±9 × 10¹⁸**