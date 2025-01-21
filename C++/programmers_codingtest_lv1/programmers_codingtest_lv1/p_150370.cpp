#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;

int todate(string date) {

	int dday = 0;

	string year = date.substr(0, 4);
	string month = date.substr(5, 2);
	string day = date.substr(8, 2);
	
	dday += (stoi(year) - 2000) * (12 * 28) + stoi(month) * 28 + stoi(day);

	return dday;
}

vector<int> solution(string today, vector<string> terms, vector <string> privacies) {

	int now = todate(today);

	map <string, int> dicts;

	vector<int> ans;

	for (string term : terms) {

		stringstream ss(term);

		string who;
		int limit;

		ss >> who >> limit;

		dicts[who] = limit;

	}
	
	for (int i = 0; i < privacies.size(); i++) {

		string these = privacies[i];

		string who = these.substr(11, 1);

		int thesedays = todate(these);

		if (thesedays + dicts[who] * 28 <= now) {
			ans.push_back(i + 1);
		}

	}
	return ans;
}