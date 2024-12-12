#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<string> strArr) {

	int big = 0;

	map<int, int> dict;

	for (auto word : strArr) {
		dict[word.length()]++;
		big = max(big, dict[word.length()]);
	}
	
	return big;
}