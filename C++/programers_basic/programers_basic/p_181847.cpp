#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string n_str) {

	int start = 0;

	while (start < n_str.length() && n_str[start] == '0') {
		start++;
	}

	return n_str.substr(start);
}