#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {

	vector<int> ans;

	queue <int> q;

	for (int i = 0; i < progresses.size(); i++) {

		int remain = 100 - progresses[i];
		int days = (remain + speeds[i] - 1) / speeds[i];
		q.push(days);
	}

	while (!q.empty()) {

		int current = q.front();

		q.pop();

		int cnt = 1;

		while (!q.empty() && q.front() <= current) {
			cnt++;
			q.pop();
		}

		ans.push_back(cnt);
	}

	return ans;
}
