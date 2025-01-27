#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string nozero(string word) {

	string nono = "";

	int cnt = 0;

	for (auto spell : word) {
		if (spell != '0') {
			nono += spell;
		}
	}

	return nono;

}

string makesecond(int diff) {

	string ans = "";

	while (diff > 0) {

		ans += to_string(diff % 2);
		diff /= 2;
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

vector<int> solution(string s) {

	vector<int> ans(2, 0);

	while (s != "1") {

		string numb = nozero(s);
		ans[1] += s.length() - numb.length();

		s = makesecond(numb.length());

		ans[0]++;
	}

	return ans;
}