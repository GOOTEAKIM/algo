#include <iostream>
#include <string>

using namespace std;

string solution(string phone_number) {

	string ans = "";

	int len = phone_number.length();

	len--;

	for (int i = 0; i < phone_number.length(); i++) {

		if (i <= len - 4) {
			ans += "*";
		}
		else
		{
			ans += phone_number[i];
		}
	}

	return ans;
}