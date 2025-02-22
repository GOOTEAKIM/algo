#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>

using namespace std;

vector<int> solution(vector<string> operations) {

	multiset<int> dq;

	for (auto word : operations) {

		stringstream ss(word);

		char command;
		int value;

		ss >> command >> value;

		if (command == 'I') {
			dq.insert(value);
		}
		else
		{
			if (!dq.empty()) {
				if (value == 1) {

					auto it = prev(dq.end());
					dq.erase(it);
				}
				else
				{
					dq.erase(dq.begin());
				}
			}
		}

	}

	if (dq.empty()) {
		return { 0, 0 };
	}
	else
	{
		return { *dq.rbegin(), *dq.begin() };
	}

}




