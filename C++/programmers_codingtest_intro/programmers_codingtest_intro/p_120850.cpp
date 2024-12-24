#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>

using namespace std;

vector<int> solution(string my_string) {

	vector<int> ans;

	unordered_set <char> book = {'0','1','2','3','4','5','6','7','8','9' };

	for (char my : my_string) {
		if (find(book.begin(), book.end(), my) != book.end()) {
			int wow = my - '0';
			ans.push_back(wow);
		}
	}

	sort(ans.begin(), ans.end());

	return ans;
}