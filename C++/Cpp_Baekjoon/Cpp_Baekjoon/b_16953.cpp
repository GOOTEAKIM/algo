#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

long long a, b;

int bfs() {

	queue<pair<long long, int>> q;

	q.push({ a,1 });

	while (!q.empty()) {

		long long now = q.front().first;

		int cnt = q.front().second;

		q.pop();

		if (now == b) return cnt;

		long long next1 = now * 2;
		long long next2 = now * 10 + 1;

		if (next1 <= b) q.push({ next1, cnt + 1 });
		if (next2 <= b) q.push({ next2, cnt + 1 });

	}


	return -1;
}

int main() {

	cin >> a >> b;
	
	cout << bfs() << "\n";

	return 0;
}

/*
0	2
1	4	21
2	8	41	42	211
3	16	81	82	411	84	421	422	2111
4	32	161	162	811	
*/