#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int ans = 0;

void dfs(vector<int> numbers, int target, int sum, int idx) {

	// ���� ����

	if (idx == numbers.size()) {
		if (sum == target) {
			ans++;
		}
		return;
	}

	dfs(numbers, target, sum + numbers[idx], idx + 1);
	dfs(numbers, target, sum - numbers[idx], idx + 1);

}

void bfs(vector<int> numbers, int target) {

    queue<pair<int, int>> q;

    q.push({ 0, 0 });

    while (!q.empty()) {

        int sum = q.front().first;
        int idx = q.front().second;
        q.pop();

        if (idx == numbers.size()) {
            if (sum == target) {
                ans++;
            }
        }
        else {
            // ���� ���ڸ� ���ϰų� ���� ť�� �߰�
            q.push({ sum + numbers[idx], idx + 1 });
            q.push({ sum - numbers[idx], idx + 1 });
        }
    }

}

int solution(vector<int> numbers, int target) {

	dfs(numbers, target, 0, 0);

    //bfs(numbers, target);

	return ans;

}