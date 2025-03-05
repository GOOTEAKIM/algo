#include <iostream>	
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int cnt = 0;

void DFS(string word, string str, int& ans) {

	char c[5] = { 'A', 'E', 'I', 'O','U' };

	if (word == str) {
		ans = cnt;
		return;
	}

	for (int i = 0; i < 5; i++) {
		if (str.length() < 5) {
			cnt++;
			DFS(word, str + c[i], ans);
		}
	}

}

int solution(string word) {

	int ans = 0;

	DFS(word, "", ans);

	return ans;
}

