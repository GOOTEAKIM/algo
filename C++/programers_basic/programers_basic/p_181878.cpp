#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
	transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
	transform(pat.begin(), pat.end(), pat.begin(), ::tolower);

	if (myString.find(pat) != string::npos) {
		return 1;
	}
	return 0;
}