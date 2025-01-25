#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {

	int ans = 0;

	for (string word : babbling) {

		int flag = 0;
		bool cut = true;

		for (int i = 0; i < word.length(); i++) {

			if (word.substr(i, 3) == "aya" && flag != 1) {
				flag = 1;
				i += 2;
			}
			else if (word.substr(i, 2) == "ma" && flag != 2) {
				flag = 2;
				i += 1;
			}
			else if (word.substr(i, 3) == "woo" && flag != 3) {
				flag = 3;
				i += 2;
			}
			else if (word.substr(i, 2) == "ye" && flag != 4) {
				flag = 4;
				i += 1;
			}
			else
			{
				cut = false;
				break;
			}
		}
		if (cut == true) {
			ans++;
		}
	}

	return ans;
}