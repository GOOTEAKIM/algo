#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n) {

	int ans = 0;

	string number = to_string(n);

	for (char n: number) {
		int cnt = n - '0';

		ans += cnt;
	}

	return ans;
}