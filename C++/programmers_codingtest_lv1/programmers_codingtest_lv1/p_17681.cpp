#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<int>> tosecond(int n, vector<int> arr) {

	vector<vector<int>> pos;

	for (int num : arr) {

		vector<int> zero;

		while (num > 0) {
			zero.push_back(num % 2);
			num /= 2;
		}

		while (zero.size() < n) {
			zero.push_back(0);
		}

		reverse(zero.begin(), zero.end());
		pos.push_back(zero);

	}

	return pos;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {

	vector<vector<int>> pos1 = tosecond(n, arr1);
	vector<vector<int>> pos2 = tosecond(n, arr2);

	vector<string> ans;

	for (int i = 0; i < pos1.size(); i++) {

		string word = "";

		vector<int> book1 = pos1[i];
		vector<int> book2 = pos2[i];

		for (int j = 0; j < book1.size(); j++) {

			if ((book1[j] == 1) || (book2[j] == 1)) {
				word += "#";
			}
			else
			{
				word += " ";
			}

		}
		ans.push_back(word);

	}
	return ans;
}