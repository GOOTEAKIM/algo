# 구름 기초 트레이닝 리뷰 (with C++)

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

- **g_175880 큰 팩토리얼**

  - int 크기 : **±2 × 10⁹**
  - long long 크기 : **±9 × 10¹⁸**

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

- **g_191018 구름 아이돌**

  - 내림차순 정렬
  - index + 1 출력

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

- **g_175018 수열**
 
  - 피보나치 수열

    ```C++
    f(n) = f(n-1) + f(n-2); 
    ```  

- **g_175909 카드 모으기**

  - visited 배열로 해당 숫자가 나온 숫자인지 아닌지 판단
    - 나왔었다? -> 무시
    - 안나왔었다? -> 방문 처리 + 카운팅
  - 카운트가 n이랑 같을 때 인덱스 + 1 출력

- **g_175232 숫자 배열**

  - 2차원 배열 출력

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

- **g_175011 0 채우기**

  - 배열에서 완전탐색으로 0의 x,y를 찾는다
  - 배열에서 완전탐색으로 x,y 부분을 다 더해서 출력

- **g_174717 큰 수식 찾기**

  - 문자열로 input을 받는다
  - 식이 길어 질수록 답이 커질수도 있으니까 long long으로 출력한다
  - char로 받으면서 isdigit을 써서 숫자인지 연산자 인지 판단한다
    ```C++
    vector<long long> nums; // 숫자
    vector<char> ops; // 연산자

    int n = expr.size();
	
    int i = 0;

    while (i < n) {

        if (isdigit(expr[i])) { // 숫자라면?
            long long num = 0;
            while (i < n && isdigit(expr[i])) { // 숫자만 계속 나올 때까지
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            nums.push_back(num); // 숫자 push
			
        } else { // 연산자라면?
            ops.push_back(expr[i]);
            i++;
        }
    }
    ```

  - 연산자 중에서도 *인 경우 우선순위로 계산해야 한다

    ```C++
    // 곱셈 먼저 처리
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == '*') {
            nums[i] = nums[i] * nums[i + 1];
            nums.erase(nums.begin() + i + 1);
            ops.erase(ops.begin() + i);
            i--; // 중요
        }
    }

    // +, - 연산 순서대로 처리
    long long res = nums[0];
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == '+') {
            res += nums[i + 1];
        } else if (ops[i] == '-') {
            res -= nums[i + 1];
        }
    }

    return res;
    ```

- **g_174909 M배 배열**

  - 배열의 요소가 m의 배수이면 그대로 출력
  - 아니라면 m 곱하여 출력

- **g_175241 Queue**

  - queue의 특성인 선입 선출을 구현.
  - Overflow, Underflow 도 구현해야 한다.

- **g_174784 밀도 정렬**

  - 밀도 == 무게 / 부피 
  - 소수점까지 구해야 한다 -> double로 받는다
  - 조건문을 걸어서 밀도, 무게, index를 기록
  - 밀도가 같다면 무게를 비교, 비교하여 더 높다면 무게, index 갱신

- **g_174924 연속 점수**

  - 점수를 얻는 방법
    1. 한 문제를 풀고 그 문제의 점수 만큼만 점수를 얻는다
    2. 한 문제를 풀고 연속으로 문제를 풀때 다음 문제의 점수가 1 차이나면 그 문제의 점수도 얻는다

  - 우선 배열의 가장 큰 숫자를 1번에 해당하는 점수로 기준 잡는다

    ```C++

    #include <vector>
    #include <algorithm>

    int num = *max_element(arr.begin(), arr.end()); // arr에서 가장 큰 값을 기준으로 정한다

    int now = arr[0];

    int total = now;
    ```

  - 배열을 탐색하면서 2번 방식의 점수 얻는 법을 계산해보고 둘 중에 큰 것을 반환한다.

    ```C++

    #include <vector>
    #include <algorithm>

    for(int i = 1; i < n; i++) {  

		    int next = arr[i];

		    if(next - now == 1) { // 이전 숫자와 1 차이난다면?
            total += next; // 총합 갱신
            now = next; // 이전 숫자 갱신

            if(total > num) { 
              num = total; // 최고 점수 갱신
            }
        } 
      
        else { // 이전 숫자보다 1넘게 차이 난다면?
          total = next;
          now = next;
        }
		
    }
	
	cout << num; // 최종 점수 반환

    ```

- **g_177450 보드 게임**

  - 말을 옮길 때 1 또는 3만큼 옮길 수 있다
  - 수학적 or dp?
  - 1, 1, 2, 3, 4, 6 ... 이런 식으로 증가
  - => fibo 느낌

    ```C++
    #include <iostream>
    #include <vector>

    vector<long long> dp(n + 1, 0); // 값이 엄청 많이 커질 수도 있으니까 long long

    dp[1] = 1; 
    dp[2] = 1; 
    dp[3] = 2; 

    if (n < 4) {
      cout << dp[n]; // 4보다 작으면 그냥 바로 출력
    } else {
	
	    for (int i = 4; i <= n; i++) {
	      dp[i] = (dp[i - 1] + dp[i - 3]) % 1000000007;  // 계산 후 1000000007로 바로 나눠준다
	    }
	
	    cout << dp[n] << endl;
    }
    ```

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

              if(!visited[i][j] && alis[i][j] == target) { // 방문하지 않고, target이랑 같은 숫자?
                  
                int ans = bfs(i,j); // bfs 탐색

                if(ans > max_cnt) {
                  max_cnt = ans; // 그룹의 최대 크기 갱신
                }
          
              }
          }
      }

      cout << max_cnt; // 답 출력

      ````

- **g_175240 Stack**

  - stack의 특성인 후입선출을 구현
  - Overflow, Underflow 도 구현해야 한다.

- **g_177463 RGB 주차장**

  - 색깔은 3가지
  - 인접하는 칸과 다른 색으로 칠해야한다.
  - 첫번째 칸을 색칠 가능한 경우의 수 3가지
  - 그 옆에 색칠 가능한 경우의 수 2가지
  - 그 다음도 2가지
  - f(1) = 3, f(2) = 6, f(3) = 12 ...
  - f(n) = f(n-1) * 2 이런 방식으로 점화식이 세워진다.
    
    ```C++

    int n;

    cin >> n;

    long long ans = 3; // 첫번째 칸은 3가지, 값이 매우 커질 수도 있으니 long long 사용
    
    for(int i = 2; i <= n; i++) {
      ans = ans * 2 % 100000007; // 2를 곱해준 후 100000007의 나머지 값으로 계산
    }

    cout << ans;
    
    ```

- **g_175928 규칙 숫자 야구**

  - 기준 숫자, 현재 숫자, 4자리 수의 숫자 2개가 주어진다
  - 총 두 숫자가 같아질 때까지 몇 번 카운팅을 하는가?

    ```C++
    
    bool isMatch() { // 정답과 같은가?

      for (int i = 0; i < 4; ++i) {
          if (ans[i] != guess[i]) return false;
      }
      return true;
    }

    ```

  - 비교를 할 때 각 숫자의 같은 인덱스에 같은 숫자가 위치한다 -> Strike
  - 숫자가 존재하지만 인덱스는 다르다 -> Ball
  - 숫자가 그냥 없다 -> Fail

  - Strike : 스트라이크인 인덱스 저장
  - Ball : 스트라이크은 인덱스 제외하고 rotate
  - Fail : 기준 숫자 안에 위치한 숫자가 나올 때까지 +1

    ```C++
      int cnt = 1;

      while (!isMatch()) { // 만족할 때까지 반복

        vector<int> strike_idx; // 스트라이크의 위치

        bool isBall = false; // 볼인가?

        for (int i = 0; i < 4; ++i) {
            
            if (guess[i] == ans[i]) {

                strike_idx.push_back(i); // 스트라이크 위치 파악
                continue;
            
            }

            if (find(ans.begin(), ans.end(), guess[i]) == ans.end()) { // fail?

                int newNum = guess[i];
                
                while (find(guess.begin(), guess.end(), newNum) != guess.end()) { // fail 규칙에 따라 다른 위치에 존재하지 않을 때까지 +1
                    newNum = (newNum + 1) % 10;
                }

                guess[i] = newNum; // 위치 고정
                continue;
            }
            isBall = true; // 볼이다!
        }

        if (isBall) { // 볼이라면
            
            vector<int> stNums; // 스트라이크 숫자 모음
            
            for (int idx : strike_idx) {
                stNums.push_back(guess[idx]);
            }

            for (int s : stNums) {
            
                auto it = find(guess.begin(), guess.end(), s); // 스트라이크 숫자가 있는 guess의 인덱스 파악

                if (it != guess.end()) { // 오른쪽 맨 끝에 있는게 아니라면?

                    guess.erase(it); // 삭제

                }
            }

            // 맨 끝이라면?
            int last = guess.back();

            guess.pop_back();

            guess.insert(guess.begin(), last);

            for (size_t i = 0; i < strike_idx.size(); ++i) {
                guess.insert(guess.begin() + strike_idx[i], stNums[i]); // 스트라이크를 원래 자리에 넣는다
            }
        }
        cnt++; // 카운팅
    }

    cout << cnt << endl;

    ```
  
