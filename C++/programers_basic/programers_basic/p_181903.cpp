#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(int q, int r, string code);

int main() {

	int q, r;
	string code;

	cin >> q >> r;
	cin >> code;

	cout << solution(q, r, code) << endl;

	return 0;
}



string solution(int q, int r, string code) {

	string answer;

	for (int i = 0; i < code.length(); i++) {

		if (i % q == r) {
			answer += code[i];
		}

	}

	return answer;
}