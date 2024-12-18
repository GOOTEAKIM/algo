#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> picture, int k) {

	vector<string> answer;

	for (auto& word : picture) {
		string go = "";
		for (auto& spell : word) {
			for (int i = 0; i < k; i++) {
				go += spell;
			}
		}
		// 세로로 확장
		for (int i = 0; i < k; i++) {
			answer.push_back(go);
		}
	}
	return answer;
}