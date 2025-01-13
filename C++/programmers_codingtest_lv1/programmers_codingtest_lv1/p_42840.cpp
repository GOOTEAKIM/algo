#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {

	vector<int> ans;

	vector<int> sheet1 = { 1,2,3,4,5 };
	vector<int> sheet2 = { 2,1,2,3,2,4,2,5 };
	vector<int> sheet3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

	int total1 = 0;
	int total2 = 0;
	int total3 = 0;

	for (int i = 0; i < answers.size(); i++) {

		if (answers[i] == sheet1[i]) total1++;
		if (answers[i] == sheet2[i]) total2++;
		if (answers[i] == sheet3[i]) total3++;
	}

	int maxScore = max({ total1, total2, total3 });

	if (total1 == maxScore) ans.push_back(1);
	if (total2 == maxScore) ans.push_back(2);
	if (total3 == maxScore) ans.push_back(3);

	return ans;
}