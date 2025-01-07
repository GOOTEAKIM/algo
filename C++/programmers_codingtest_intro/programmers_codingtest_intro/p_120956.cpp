#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

int solution(vector<string> babbling) {

	int ans = 0;

	for (string word : babbling) {

		bool check = false;

		for (int i = 0; i < word.size(); i++) {

			if (word.substr(i, 3) == "aya") i += 2;
			else if (word.substr(i, 2) == "ye") i += 1;
			else if (word.substr(i, 3) == "woo") i += 2;
			else if (word.substr(i, 2) == "ma") i += 1;
			else
			{
				check = true;
				break;
			}
		}
		if (!check) ans++;
	}

	return ans;

}
