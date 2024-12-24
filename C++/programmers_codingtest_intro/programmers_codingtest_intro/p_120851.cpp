#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int solution(string my_string) {
	int ans = 0;

	unordered_set <char> book = { '1','2','3','4','5','6','7','8','9' };

	for (char my : my_string) {

		if (find(book.begin(), book.end(), my) != book.end()) {
			ans += my-'0';
		}
	}

	return ans;
}