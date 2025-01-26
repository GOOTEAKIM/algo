#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {

	stringstream ss(s);

	vector<int> arr;

	int num;

	string ans = "";

	while (ss >> num) {
		arr.push_back(num);
	}

	int minimum = *min_element(arr.begin(), arr.end());
	int maximum = *max_element(arr.begin(), arr.end());

	return to_string(minimum) + " " + to_string(maximum);

	return ans;
}