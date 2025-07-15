#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> ans(4); // 정답
vector<int> guess(4); // 예상 값

bool isMatch() { // 정답과 같은가?

    for (int i = 0; i < 4; ++i) {
        if (ans[i] != guess[i]) return false;
    }
    return true;
}

int main() {

    string answer, order;
    cin >> answer >> order;

    for (int i = 0; i < 4; ++i) {
        ans[i] = answer[i] - '0'; 
        guess[i] = order[i] - '0';
    }

    if (isMatch()) { // 처음에 바로 정답과 같다면?
        cout << 1 << endl;
    }

    else {

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
    }

    return 0;
}
