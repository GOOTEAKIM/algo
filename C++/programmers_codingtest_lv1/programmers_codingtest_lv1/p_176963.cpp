#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    
    map<string, int> books;

    vector<int> ans;

    for (int i = 0; i < name.size(); i++) {

        books[name[i]] = yearning[i];

    }

    for (auto pic : photo) {
        int cnt = 0;

        for (auto scene : pic) {
            cnt += books[scene];
        }

        ans.push_back(cnt);
    }

    return ans;
}