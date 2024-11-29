#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	return 0;
}

string solution(vector<int> numLog) {

	string result;

	for (int i = 0; i < numLog.size() - 1; i++) {
		int num = numLog[i+1] - numLog[i];

		if (num == 1) {
			result += 'w';
		}
		else if (num == -1) {
			result += 's';
		}
		else if (num == 10) {
			result += 'd';
		}
		else
		{
			result += 'a';
		}
	}

	return result;
}
