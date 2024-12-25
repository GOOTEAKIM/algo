#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

string solution(string my_string) {

	unordered_set <char> book;
	string ans = "";

	for (auto my : my_string) {

		if (find(book.begin(), book.end(), my) == book.end()) {
			book.insert(my);
			ans += my;
		}
	}
	return ans;
}