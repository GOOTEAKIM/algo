#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {

	map<char, int> books;

	// map 을 채워준다.
	for (string key : keymap) {

		for (int i = 0; i < key.length(); i++) {

			char spel = key[i];

			// 만약 동일한 값 있다면?
			if (books.find(spel) != books.end()) {

				if (books[spel] > (i + 1)) {
					books[spel] = (i + 1);
				}

			}
			// 없다면 ? 그냥 더해야지 뭐
			else
			{
				books[key[i]] = i + 1;
			}

		}

	}

	vector<int> ans;

	for (string word : targets) {

		int cnt = 0;

		for (int i = 0; i < word.length(); i++) {
			char spell = word[i];

			if (books.find(spell) != books.end()) {
				cnt += books[spell];
			}
			else
			{
				cnt = -1;
				break;
			}

		}
		ans.push_back(cnt);
	}
	return ans;
}


