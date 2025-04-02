#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    
    vector<int> ans;

    unordered_set<string> dict;

    dict.insert(words[0]);

    for (int i = 1; i < words.size(); i++) {

        string now = words[i];

        string prev = words[i - 1];

        if (dict.count(now) > 0 || now[0] != prev.back()) {
            return { (i % n) + 1, (i / n) + 1 };
        }
        dict.insert(now);
    }
    return { 0,0 };
}