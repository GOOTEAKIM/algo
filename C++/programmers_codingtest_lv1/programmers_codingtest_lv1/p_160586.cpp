#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {

	map<char, int> books;

	// map �� ä���ش�.
	for (string key : keymap) {

		for (int i = 0; i < key.length(); i++) {

			char spel = key[i];

			// ���� ������ �� �ִٸ�?
			if (books.find(spel) != books.end()) {

				if (books[spel] > (i + 1)) {
					books[spel] = (i + 1);
				}

			}
			// ���ٸ� ? �׳� ���ؾ��� ��
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


