#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> real;

    for (int r : reserve) {
        if (find(lost.begin(), lost.end(), r) != lost.end()) {
            lost.erase(find(lost.begin(), lost.end(), r));
        }
        else {
            real.push_back(r);
        }
    }

    sort(lost.begin(), lost.end());
    sort(real.begin(), real.end());

    int answer = n - lost.size();

    for (int num : lost) {
        for (int j = 0; j < real.size(); j++) {
            if (num == real[j] - 1 || num == real[j] + 1) {
                answer++;
                real.erase(real.begin() + j);
                break;
            }
        }
    }

    return answer;
}