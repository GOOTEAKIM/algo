#include <iostream>
#include <vector>
#include <algorithm>	
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

	unordered_map<string, int> cnt;

	for (string name : participant) {

		cnt[name]++;

	}

	for (string people : completion) {
		cnt[people]--;
	}

	for (auto couple : cnt) {

		if (couple.second > 0) {
			return couple.first;
		}

	}

}