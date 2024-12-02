#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector <int> solution(int n, int k) {

	vector<int> answer;

	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			answer.push_back(i);
		}
	}
	return answer;
}