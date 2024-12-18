#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {

	for (int i = 0; i <= str2.length() - str1.length(); i++) {

		if (str2.substr(i,str1.length()) == str1) {
			return 1;
			break;
		}

	}
	return 0;
}