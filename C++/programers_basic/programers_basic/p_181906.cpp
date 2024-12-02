#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

int solution(string my_string, string is_prefix) {

	int flag = 0;

	vector<string> books;

	for (int i = 0; i < my_string.length(); i++) {

		string word = my_string.substr(0, i + 1);

		if (word == is_prefix) {
			flag = 1;
			break;
		}
	}

	return flag;
}