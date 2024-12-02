#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

int solution(vector<int> arr, int idx) {

	int answer = -1;

	for (int i = idx; i <= arr.size(); i++) {
		if (arr[i] == 1) {
			answer = i;
			break;
		}
	}

	return answer;
}