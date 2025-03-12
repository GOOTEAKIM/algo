#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int alis[10];
int ans[10];
bool visited[10];


void dfs(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}

	else
	{
		int prev = -1; // 중복을 방지할 이전 숫자 기록

		for (int i = 0; i < n; i++) {

			if (!visited[i] && prev != alis[i]) {
				visited[i] = true; // 방문 처리

				prev = alis[i]; // 이전 숫자를 현재로 수정

				ans[cnt] = alis[i]; // 답칸에 작성

				dfs(cnt + 1); // 탐색

				visited[i] = false; // 방문 해제
			}
		}
	}

}

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis, alis + n);

	dfs(0);

	return 0;
}