#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<int> emergency) {
	
	vector<int> answer;

	vector<int> book = emergency;

	sort(book.begin(), book.end(), greater<>());

	for (int i = 0; i < emergency.size(); i++) {
		for (int j = 0; j< book.size(); j++)
		{
			if (book[j] == emergency[i]) {
				answer.push_back(j + 1);
			}
		}
	}
	return answer;
}