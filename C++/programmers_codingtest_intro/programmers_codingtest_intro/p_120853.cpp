#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {

	int answer = 0;
	int prev = 0;
	string ans = "";

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'Z') {
			answer -= prev;
			ans = "";
		}
		else if (s[i] == ' ') {
			if (!ans.empty()) {
				int wow = stoi(ans);
				ans = "";
				prev = wow;
				answer += wow;
			}
		}
		else
		{
			ans += s[i];
		}
	} 

	if (!ans.empty()) {
		int wow = stoi(ans);
		answer += wow;
	}

	return answer;
}