#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {

	int ans = 0;

	int hop = 0;

	unordered_map<string, int> want_map;

	for (int i = 0; i < want.size(); i++) {
		want_map[want[i]] = number[i];

		hop += number[i];
	}

	for (int i = 0; i <= discount.size() - hop; i++) {

		unordered_map<string, int> discount_map;

		for (int j = i; j < i + hop; j++) {
			discount_map[discount[j]]++;
		}

		if (want_map == discount_map) {
			ans++;
		}

	}

	return ans;
}