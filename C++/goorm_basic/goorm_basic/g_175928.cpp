#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> ans(4); // ����
vector<int> guess(4); // ���� ��

bool isMatch() { // ����� ������?

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

    if (isMatch()) { // ó���� �ٷ� ����� ���ٸ�?
        cout << 1 << endl;
    }

    else {

        int cnt = 1;

        while (!isMatch()) { // ������ ������ �ݺ�

            vector<int> strike_idx; // ��Ʈ����ũ�� ��ġ

            bool isBall = false; // ���ΰ�?

            for (int i = 0; i < 4; ++i) {
                if (guess[i] == ans[i]) {
                    strike_idx.push_back(i); // ��Ʈ����ũ ��ġ �ľ�
                    continue;
                }

                if (find(ans.begin(), ans.end(), guess[i]) == ans.end()) { // fail?

                    int newNum = guess[i];
                    
                    while (find(guess.begin(), guess.end(), newNum) != guess.end()) { // fail ��Ģ�� ���� �ٸ� ��ġ�� �������� ���� ������ +1
                        newNum = (newNum + 1) % 10;
                    }

                    guess[i] = newNum; // ��ġ ����
                    continue;
                }
                isBall = true; // ���̴�!
            }

            if (isBall) { // ���̶��
                vector<int> stNums; // ��Ʈ����ũ ���� ����
                for (int idx : strike_idx) {
                    stNums.push_back(guess[idx]);
                }

                for (int s : stNums) {
                    auto it = find(guess.begin(), guess.end(), s); // ��Ʈ����ũ ���ڰ� �ִ� guess�� �ε��� �ľ�

                    if (it != guess.end()) { // ������ �� ���� �ִ°� �ƴ϶��?

                        guess.erase(it); // ����

                    }
                }

                // �� ���̶��?
                int last = guess.back();

                guess.pop_back();

                guess.insert(guess.begin(), last);

                for (size_t i = 0; i < strike_idx.size(); ++i) {
                    guess.insert(guess.begin() + strike_idx[i], stNums[i]); // ��Ʈ����ũ�� ���� �ڸ��� �ִ´�
                }
            }
            cnt++; // ī����
        }

        cout << cnt << endl;
    }

    return 0;
}
