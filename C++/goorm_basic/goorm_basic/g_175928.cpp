#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> ans(4);   // answer -> ans
vector<int> guess(4); // expectation -> guess

bool isMatch() {

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

    if (isMatch()) {
        cout << 1 << endl;
    }

    else {

        int cnt = 1;

        while (!isMatch()) {

            vector<int> strike_idx; 
            bool hasBall = false; 

            for (int i = 0; i < 4; ++i) {
                if (guess[i] == ans[i]) {
                    strike_idx.push_back(i);
                    continue;
                }

                if (find(ans.begin(), ans.end(), guess[i]) == ans.end()) {
                    int newNum = guess[i];
                    while (find(guess.begin(), guess.end(), newNum) != guess.end()) {
                        newNum = (newNum + 1) % 10;
                    }
                    guess[i] = newNum;
                    continue;
                }
                hasBall = true;
            }

            if (hasBall) {
                vector<int> stNums;
                for (int idx : strike_idx) {
                    stNums.push_back(guess[idx]);
                }

                for (int s : stNums) {
                    auto it = find(guess.begin(), guess.end(), s);
                    if (it != guess.end()) {
                        guess.erase(it);
                    }
                }

                int last = guess.back();
                guess.pop_back();
                guess.insert(guess.begin(), last);

                for (size_t i = 0; i < strike_idx.size(); ++i) {
                    guess.insert(guess.begin() + strike_idx[i], stNums[i]);
                }
            }
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
