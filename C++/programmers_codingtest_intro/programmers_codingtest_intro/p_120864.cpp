#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string) {

	int ans = 0;

	string num = "";

	for (char c : my_string) {

		if (isdigit(c)) {
			num += c;
		}
		else
		{
			if (!num.empty()) {
				ans += stoi(num);
				num = "";
			}
		}
	}

	if (!num.empty()) {
		ans += stoi(num);
	}

	return ans;
}