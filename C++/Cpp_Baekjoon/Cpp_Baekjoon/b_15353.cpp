#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string solution(string A, string B) {

	string ans = "";

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	int lenA = A.length();
	int lenB = B.length();

	int carry = 0;

	int maxLen = max(A.length(), B.length());

	for (int i = 0; i < maxLen; i++) {
		int digitA = (i < A.length()) ? (A[i] - '0') : 0;
		int digitB = (i < B.length()) ? (B[i] - '0') : 0;

		int sum = digitA + digitB + carry;
		ans += to_string(sum % 10);
		carry = sum / 10;
	}

	if (carry > 0) {
		ans += to_string(carry);
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

int main() {

	string A, B;

	cin >> A >> B;

	string result = solution(A, B);

	cout << result << endl;

	return 0;
}