#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string code);

int main() {

	string code;

	cin >> code;

	cout << solution(code) << endl;

	return 0;
}

string solution(string code) {
	int mode = 0;

	string result;

	for (int i = 0; i < code.length(); i++) {

		if (mode == 0) {
			if (code[i] == '1')
			{
				mode = 1;
			}
			else {
				if (i % 2 == 0) {
					result += code[i];
				}
			}
		}
		else
		{
			if (code[i] == '1') {
				mode = 0;
			}
			else
			{
				if (i % 2 == 1) {
					result += code[i];
				}
			}
		}

	}

	if (result.empty()) {
		return "EMPTY";
	}
	else
	{
		return result;
	}
	
}