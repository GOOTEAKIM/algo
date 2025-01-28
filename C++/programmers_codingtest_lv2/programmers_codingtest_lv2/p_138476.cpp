#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(int k, vector<int> tangerine) {

	int ans = 0;

	map <int, int> dict;

	for (int num : tangerine) {
		dict[num]++;
	}

	vector<int> books;

	for (auto numbers : dict) {
		books.push_back(numbers.second);
	}

	sort(books.begin(), books.end(), greater<int>());

	int cnt = 0;

	for (int number : books) {
		if (cnt >=k) {
			break;
		}
		else
		{
			cnt += number;
			ans++;
		}
	}

	return ans;
}
0 2
1 1
2 3
3 2
