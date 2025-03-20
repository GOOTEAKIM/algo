#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {

	int ans = 0;

	unordered_map<int, int> m1;

	unordered_map<int, int> m2;

	// ������ �� ä��� �ϳ��� �������� �ű�� ���̴�.
	for (int next : topping) {
		m2[next]++;
	}

	for (int i = 0; i < topping.size() - 1; i++) {
		m1[topping[i]]++;
		m2[topping[i]]--;

		if (m2[topping[i]] == 0) m2.erase(topping[i]);

		if (m1.size() == m2.size()) ans++;
	}

	return ans;
}