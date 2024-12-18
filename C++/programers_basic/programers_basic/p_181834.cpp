#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string myString) {

	for (int i = 0; i < myString.length(); i++) {

		if (myString[i] < 'l') {
			myString[i] = 'l';
		}
	}
	return myString;
}