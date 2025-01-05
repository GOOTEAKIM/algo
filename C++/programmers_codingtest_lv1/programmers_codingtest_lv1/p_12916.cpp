#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool solution(string s) {

	bool ans = true;

	transform(s.begin(), s.end(), s.begin(), ::tolower);

	int cp = 0;
	int cy = 0;

	for (char spell : s) {
		if (spell == 'p') {
			cp++;
		}
		else if (spell == 'y') {
			cy++;
		}
	}

	if (cp != cy) {
		ans = false;
	}

	return ans;
}