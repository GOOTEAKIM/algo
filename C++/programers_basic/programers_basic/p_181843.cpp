#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(string my_string, string target) {

	if (my_string.find(target) != string::npos) {
		return 1;
	}
	return 0;
}