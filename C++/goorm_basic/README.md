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

- **g_175018 수열**
 
  - 피보나치 수열

    ```C++
    f(n) = f(n-1) + f(n-2); 
    ```  

- **g_175177 거스름돈**
  - 동전 종류 : 40, 20, 10, 5, 1

    ```C++
    // while true 로 놓고 본인 돈이 5보다 작아지면 break
    // 가장 큰 동전의 개수 count 

    int n = 55;
    int ans = 0;

    while(true) {
        if(n > 40) {
          ans += (n/40);
          n %= 40; // n 재할당
        } 
        ...
        ...
        ...
        else { // 5보다 작을 때
          ans += n;
          break;
        }

    }

    ```

- **g_175194 구름 스퀘어**
  - 시작 시간, 종료 시간이 주어진다.
  - 행사 시간이 겹치지 않게 **최대한 많은 행사**를 해야한다.
  
    ```C++
    #include <vector>
    #include <algorithm>

    vector<pair<long long,long long>> arr(n);

    for(int i = 0; i <n; i++) {

      int start, finish;

      cin >> start >> finish;
      
      arr.push_back({finish, start}); // 종료 시간이 먼저 나오게 arr 구성
    }

    sort(arr.begin(), arr.end()); // 종료 시간이 가장 빠르도록 정렬

    // 다음 행사 출발 시간 > 이전 행사 종료 시간? => cnt++

    ```

- **g_191018 구름 아이돌**

  - 내림차순 정렬
  - index + 1 출력

- g_175232

  - 2차원 배열 출력

- **g_175909 카드 모으기**

  - visited 배열로 해당 숫자가 나온 숫자인지 아닌지 판단
    - 나왔었다? -> 무시
    - 안나왔었다? -> 방문 처리 + 카운팅
  - 카운트가 n이랑 같을 때 인덱스 + 1 출력

