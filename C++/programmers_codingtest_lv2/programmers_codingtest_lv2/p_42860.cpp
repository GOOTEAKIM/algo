#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name) {

	int ans = 0;

	int n = name.length();

	for (auto spell : name) {
		ans += min(spell - 'A', 'Z' - spell + 1);
	}

	int min_move = n - 1;

	for (int i = 0; i < n; i++) {

		int next = i + 1;

		while (next < n && name[next] == 'A') {
			next++;
		}

		min_move = min(min_move, i + n - next + min(i, n - next));

	}

	ans += min_move;
	return ans;
}