#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main() {

	stack<float> numbers;
	stack<char> orders;

	int n;

	cin >> n;

	string words;

	cin >> words;

	vector<double> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	stack<double> st;

	for (auto spell : words) {
		if (isalpha(spell)) { // ¾ËÆÄºªÀÌ¸é?
			st.push(arr[spell - 'A']);
		}
		else
		{
			double b = st.top();
			st.pop();
			double a = st.top();
			st.pop();

			double result = 0;

			if (spell == '+') result = a + b;
			else if (spell == '-') result = a - b;
			else if (spell == '*') result = a * b;
			else if (spell == '/') result = a / b;

			st.push(result);
		}
	}
	
	cout << fixed;
	cout.precision(2);
	cout << st.top();

	return 0;
}

