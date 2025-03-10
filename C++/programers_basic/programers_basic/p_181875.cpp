#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
	for (int i = 0; i < strArr.size(); i++) {
		if (i % 2 == 0) {
			transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
		}
		else
		{
			transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper);
		}
	}
	return strArr;
}