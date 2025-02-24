#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

// 연산자 우선순위
int precedence(char op) {

	if (op == '*' || op == '/') return 2;
	if (op == '+' || op == '-') return 1;

	return 0;
}

int main() {

	string input;

	cin >> input;

	stack<char> calculators;

	string ans = "";

	for (char spell : input) {

		if (isalpha(spell)) {
			ans += spell;
		}
		else if (spell == '(') {
			calculators.push(spell);
		}
		else if (spell == ')') {
			while (!calculators.empty() && calculators.top() != '(') {
				ans += calculators.top();

				calculators.pop();
			}
			calculators.pop(); // 스택을 비운다.
		}
		else
		{
			while (!calculators.empty() && precedence(calculators.top()) >= precedence(spell)) {
				ans += calculators.top();

				calculators.pop();
			}
			calculators.push(spell);
		}
	}

	while (!calculators.empty()) {
		ans += calculators.top();

		calculators.pop();
	}

	cout << ans;

	return 0;
}