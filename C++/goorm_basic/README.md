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

- **g_174909 M배 배열**

  - 배열의 요소가 m의 배수이면 그대로 출력
  - 아니라면 m 곱하여 출력

- **g_175011 0 채우기**

  - 배열에서 완전탐색으로 0의 x,y를 찾는다
  - 배열에서 완전탐색으로 x,y 부분을 다 더해서 출력

- **g_175241 Queue**

  - queue의 특성인 선입 선출을 구현.
  - Overflow, Underflow 도 구현해야 한다.

- **g_173337 8진수 계산기**
  
  - 10진수의 합을 구한다
  - 1에서 8을 곱해서 10진수의 합보다 작은 최대 cnt를 구한다 -> 8의 최대 제곱수

    ```C++
    string ans = ""; // 문자열로 출력한다

    while(base > 0) { // 8진수를 왼쪽에서 부터 출력

      int digit = total / base;

      ans += digit + '0'; // int -> char 변환

      total %= base;
      
      base /= 8;
      
    }
    ```

- **g_174784 밀도 정렬**

  - 밀도 == 무게 / 부피 
  - 소수점까지 구해야 한다 -> double로 받는다
  - 조건문을 걸어서 밀도, 무게, index를 기록
  - 밀도가 같다면 무게를 비교, 비교하여 더 높다면 무게, index 갱신

- **g_174760 단어 필터**

  - 기존 단어에서 필터링 할 단어가 있는지 판단
  - 있으면 계속 있는대로 지운다.

    ```C++
    #include <string>

    while (true) {

      int pos = E.find(S);
      
      // int idx = E.find(S)  ;
      // E 에서 S가 존재한다면 E에서 S가 시작하는 idx 반환
      // 만약 없다면? string::npos 반환

      if (pos == string::npos) {
          break;
      }

      E.erase(pos, S.length());
      
      // E에서 pos부터 E의 길이만큼 지운다
      
      // string.erase(int, int);
    }
    ```

- **g_175240 Stack**

  - stack의 특성인 후입선출을 구현
  - Overflow, Underflow 도 구현해야 한다.

- **g_177478 뭉친 K**

  - n*n 크기의 배열이 주어진다
  - 배열의 x,y의 좌표에 위치한 숫자 중 상하좌우 인접한 수 중 x,y 좌표 값이랑 같은 수의 개수 -> 뭉친 그룹
  - x,y의 좌표 값이랑 같은 수 중 가장 큰 뭉친 그룹의 크기를 구한다
  
    - bfs로 탐색
      - 상하좌우로 탐색
      - 방문하지 않고 target이랑 같은 숫자라면?
      - cnt 증가

        ```C++
        #include <vector>
        #include <queue>

        // 상하좌우 방향 배열
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        using namespace std;

        int bfs(int y, int x) {

          int cnt = 1;

          int cost = alis[y][x];
          
          queue<pair<int,int>> q;

          q.push({y,x}); // q에 push 

          visited[y][x] = true; // 방문 처리

          while(!q.empty()) {

            int now_y = q.front().first;
            int now_x = q.front().second;

            int now = alis[now_y][now_x];
            
            q.pop();

            for(int i = 0; i < 4; i++) { // 4가지 방향 탐색
              
              int ny = now_y + dy[i];
              int nx = now_x + dx[i];

              if(ny >= 0 && ny < n && nx >= 0 && nx < n) { // 배열 내에 위치하는지 판단
                
                if(!visited[ny][nx]) { // 방문 안하고

                  int next = alis[ny][nx];

                  if(next == now) { // 값이 같다면?
                    
                    q.push({ny,nx}); // q에 push 

                    visited[ny][nx] = true; // 방문처리
                    
                    cnt++; // 카운트 증가
                  }
                  
                }
              }
            }
            
          }
          return cnt;
          
        }
        
        ```

    - 배열에서 x,y 좌표에 위치한 숫자 -> target
    - target이상 같은 숫자 && 방문하지 않았다면? bfs 탐색

      ```C++
      #include <vector>
      #include <queue>

      using namespace std;

      int target = alis[y-1][x-1]; // 좌표가 인덱스 값이므로 x,y에 -1 해주는 것을 주의한다.

      int max_cnt = 0; // 가장 큰 그룹의 크기

      for(int i=0; i<n; i++) {
          for(int j=0; j<n; j++) {

              if(!visited[i][j] && alis[i][j] == target) { // 방문하지 않고, target이랑 같ㅇ느 숫자?
                  
                int ans = bfs(i,j); // bfs 탐색

                if(ans > max_cnt) {
                  max_cnt = ans; // 그룹의 최대 크기 갱신
                }
          
              }
          }
      }

      cout << max_cnt; // 답 출력

      ````
