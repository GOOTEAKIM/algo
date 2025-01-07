#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {

	string ans = "";

	int len1 = bin1.length();
	int len2 = bin2.length();

	reverse(bin1.begin(), bin1.end());
	reverse(bin2.begin(), bin2.end());

	if (len1 > len2) {

		int diff = len1 - len2;

		for (int i = 0; i < diff; i++) {
			bin2 += '0';
		}

	}
	else
	{
		int diff = len2 - len1;

		for (int i = 0; i < diff; i++) {
			bin1 += '0';
		}
	}

	int carry = 0;
	
	for (int i = 0; i < bin1.size(); i++) {

		int n = (bin1[i] - '0') + (bin2[i] - '0') + carry;
		carry = n / 2;
		ans += to_string(n % 2);

	}

	if (carry != 0) ans += to_string(carry);

	reverse(ans.begin(), ans.end());

	return ans;

}