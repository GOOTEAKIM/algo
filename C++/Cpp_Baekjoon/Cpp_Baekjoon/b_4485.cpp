#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int arr[126][126];
int dp[126][126];

int dist[126][126];

int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };

int n;

void bfs() {

	queue<pair<int, int>> q;

	dp[0][0] = arr[0][0];

	q.push({ 0,0 });

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (dp[ny][nx] > dp[y][x] + arr[ny][nx]) {

					dp[ny][nx] = dp[y][x] + arr[ny][nx];

					q.push({ ny,nx });
				}
			}
		}

	}

}

void dijkstra() {

	priority_queue<pair<int, pair<int, int>>, vector<pair<int,pair<int,int>>>, greater<>> pq;

	dist[0][0] = arr[0][0];

	pq.push({ arr[0][0], {0,0} });

	while (!pq.empty()) {

		int cost = pq.top().first;

		int y = pq.top().second.first;
		int x = pq.top().second.second;

		pq.pop();

		for (int i = 0; i < 4; i++) {

			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (dist[ny][nx] > cost + arr[ny][nx]) {

					dist[ny][nx] = cost + arr[ny][nx];

					pq.push({ dist[ny][nx], {ny,nx} });
				}

			}

		}

	}

}

void solution(int tc) {

	/*
	bfs();
	cout << "Problem " << tc << ": " << dp[n - 1][n - 1] << "\n";
	*/

	dijkstra();

	cout << "Problem " << tc << ": " << dist[n - 1][n - 1] << "\n";
}

int main() {

	int tc = 1;

	while (true) {

		cin >> n;

		if (n == 0) break;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
	
				cin >> arr[i][j];
				dist[i][j] = INF;
				//dp[i][j] = INF;
			}
		}
		
		solution(tc++);
	}

	return 0;
}

