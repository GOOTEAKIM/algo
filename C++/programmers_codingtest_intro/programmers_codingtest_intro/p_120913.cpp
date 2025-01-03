#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> solution(string my_str, int n) {

	vector<string> ans;

	for (int i = 0; i < my_str.length(); i += n) {
		ans.push_back(my_str.substr(i, n));
	}

	return ans;

}