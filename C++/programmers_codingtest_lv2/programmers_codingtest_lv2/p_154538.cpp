#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>

using namespace std;

int solution(int x, int y, int n) {

	queue<pair<int, int>> q;

	unordered_set<int> visited;

	q.push({ x,0 });

	visited.insert(x);

	while (!q.empty()) {

		int cur = q.front().first;

		int cnt = q.front().second;

		q.pop();

		if (cur == y) return cnt; // 만약 같은 수로 된다면 반환

		int nextnum[3] = { cur + n, cur * 2, cur * 3 }; // 3가지 연산 가능

		for (int next : nextnum) {

			if (next <= y && visited.find(next) == visited.end()) { // y보다 작고 방문하지 않았다면?

				q.push({ next,cnt + 1 });

				visited.insert(next);
			}

		}

	}

	return -1; // 못찾으면 -1 반환

}
