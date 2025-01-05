#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(long long n) {

	vector<int> ans;

	string number = to_string(n);

	for (char spell : number) {
		ans.push_back(spell - '0');
	}

	reverse(ans.begin(), ans.end());

	return ans;
}