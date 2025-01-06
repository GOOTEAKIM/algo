#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string t, string p) {

	int ans = 0;

	int len_t = t.length();
	int len_p = p.length();

    for (int i = 0; i <= len_t - len_p; i++) { 
        string word = t.substr(i, len_p);

        // 문자열로 비교
        if (word <= p) {
            ans++;
        }
    }

	return ans;
}