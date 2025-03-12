#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int arr[9];

void dfs(int now, int start) {
	
	// 기저 조건
	if (now == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	else
	{	
		// 가라 재귀
		for (int i = start; i <= n; i++) {

			arr[now] = i;

			dfs(now + 1, i); // 이렇게 하면 증가하는 식으로 재귀 탐색
		}
	}

}

int main() {

	cin >> n >> m;

	dfs(0,1);

	return 0;
}