#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(int x) {

	bool ans = true;

	string number = to_string(x);

	int div = 0;

	for (char spell : number) {
		div += spell - '0';
	}

	if (x % div != 0) {
		ans = false;
	}

	return ans;
}