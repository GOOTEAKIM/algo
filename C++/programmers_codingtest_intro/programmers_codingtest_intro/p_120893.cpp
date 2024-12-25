#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string) {

	string ans = "";

	for (auto my : my_string) {

		if (my >= 'a' && my <= 'z') {
			ans += toupper(my);
		}
		else if (my >= 'A' && my <= 'Z')
		{
			ans += tolower(my);
		}
	}

	return ans;
}