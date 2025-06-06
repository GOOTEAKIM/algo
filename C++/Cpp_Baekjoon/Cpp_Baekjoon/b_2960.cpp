#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	vector<bool> visited(n + 1, false);

	int cnt = 0;

	for (int i = 2; i <= n; i++) {

		if (visited[i]) continue; // 방문했다면 ? 패스

		for (int j = i; j <= n; j += i) { // 배수 탐색
			
			if (!visited[j]) { // 방문 안했다면?
				
				// 방문
				visited[j] = true;
				cnt++;

				if (cnt == k) { // k 번째 수이면? 리턴
					
					cout << j;

					return 0;
				}
			}
		}
	}

	return 0;
}
