#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(int l, int r) {

	vector<int> answer;

	for (int i = l; i <= r; i++) {

		int flag = 1;
		for (int j = 0; j < to_string(i).length(); j++) {
			if (to_string(i)[j] == '0' || to_string(i)[j] == '5') {
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1) {
			answer.push_back(i);
		}

	}

	if (answer.empty()) answer.push_back(-1);

	return answer;
}