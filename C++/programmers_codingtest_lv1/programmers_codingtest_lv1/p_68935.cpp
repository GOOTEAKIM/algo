#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(int n) {

	int ans = 0;

	vector<int> book;

	while (n > 0) {
		book.push_back(n % 3);
		n /= 3;
	}

	int k = 1;

	while (!book.empty()) {
		ans += k * book.back();
		book.pop_back();
		k *= 3;
	}

	return ans;
}