#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solution(int n) {

	int cnt = 0; // 카운트

	int ans = 0; // 결과값

	while (cnt < n) {
		ans++;

		if (ans % 3 == 0 || to_string(ans).find('3') != string::npos) {
			continue;
		}

		cnt++;
	}


	return ans;
}