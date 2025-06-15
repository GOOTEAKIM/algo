#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>

using namespace std;

bool isConvertible(const string& a, const string& b) {

    int diff = 0;

    for (int i = 0; i < a.size(); i++) {

        if (a[i] != b[i]) diff++;
        if (diff > 1) return false;

    }
    return diff == 1;
}

int solution(string begin, string target, vector<string> words) {
    
    if (find(words.begin(), words.end(), target) == words.end()) {
        return 0;
    }

    queue<pair<string, int>> q;

    unordered_set<string> visited;

    q.push({ begin,0 });
    visited.insert(begin);

    while (!q.empty()) {

        string now_word = q.front().first;
        int cnt = q.front().second;

        q.pop();

        if (now_word == target) return cnt;

        for (const auto& word : words) {

            if (!visited.count(word) && isConvertible(now_word, word)) {

                visited.insert(word);
                q.push({ word, cnt + 1 });
            }

        }

    }

    return 0;
}