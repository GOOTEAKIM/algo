#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string changer(int num) { // 2진수 만들기

	string word = "";

	while (num > 0) {
		int bit = num % 2;
		word += (bit + '0');
		num /= 2;
	}

	reverse(word.begin(), word.end());

	return word;
}

bool cmp(const pair<string, int>& a, const pair<string, int>& b) { // 2진수 중 1의 개수가 많은 것을 우선 정렬, 같다면 10진수 내림차순 정렬

	int cntA = count(a.first.begin(), a.first.end(), '1');
	int cntB = count(b.first.begin(), b.first.end(), '1');

	if (cntA != cntB) {
		return cntA > cntB;
	}

	return a.second > b.second;

}

int main() {

	int n, k;

	cin >> n >> k;

	vector<pair<string, int>> alis;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		string word = changer(num);

		alis.push_back({ word, num });
	}

	sort(alis.begin(), alis.end(), cmp);

	cout << alis[k - 1].second;

	return 0;
}