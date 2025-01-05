#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(string s) {

	for (char spell : s) {
		if (!isdigit(spell)) {
			return false;
		}
	}

	if (s.length() == 4 || s.length() == 6) {
		return true;
	}

	else
	{
		return false;
	}

}