#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    unordered_map <string, int> closet;

    for (auto cloth : clothes) {

        string item = cloth[0];
        string category = cloth[1];

        closet[category]++;

    }
    
    int ans = 1;

    vector<int> arr;

    for (auto costume : closet) {

        ans *= (costume.second + 1);
    }

    ans--;

    return ans;

}

