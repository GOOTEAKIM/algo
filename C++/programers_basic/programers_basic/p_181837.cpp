#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<string> order) {

	int answer = 0;

	vector<string> ame{ "iceamericano", "americanoice","hotamericano", "americanohot", "americano", "anything" };

	for (auto& cup : order) {

		if (find(ame.begin(), ame.end(), cup) != ame.end()) {
			answer += 4500;
		}
		else
		{
			answer += 5000;
		}
	}

	return answer;
}
