#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solution(int n) {

	string ans = "";

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			ans += "¼ö";
		}
		else
		{
			ans += "¹Ú";
		}
	}

	return ans;
}