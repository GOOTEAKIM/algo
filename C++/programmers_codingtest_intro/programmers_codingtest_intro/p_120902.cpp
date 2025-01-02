#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int solution(string my_string) {

	int ans;

	stringstream ss;
	ss.str(my_string);

	ss >> ans;

	char ch;
	int tmp = 0;

	while (ss) {
		if (ch == '+') {
			ans += tmp;
		}
		else if (ch == '-') {
			ans -= tmp;
		}
		ss >> ch >> tmp;
	}

	return ans;
}