#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string cipher, int code) {

	string ans = "";

	for (int i = 0; i < cipher.length(); i++) {

		if (i % code == (code-1)) {
			ans += cipher[i];
		}

	}
	return ans;
}
