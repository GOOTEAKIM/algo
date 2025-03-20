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

		if (cur == y) return cnt; // ���� ���� ���� �ȴٸ� ��ȯ

		int nextnum[3] = { cur + n, cur * 2, cur * 3 }; // 3���� ���� ����

		for (int next : nextnum) {

			if (next <= y && visited.find(next) == visited.end()) { // y���� �۰� �湮���� �ʾҴٸ�?

				q.push({ next,cnt + 1 });

				visited.insert(next);
			}

		}

	}

	return -1; // ��ã���� -1 ��ȯ

}
