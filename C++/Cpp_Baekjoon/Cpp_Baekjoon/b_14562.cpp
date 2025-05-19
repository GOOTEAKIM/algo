#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct info {
	int s, t, cnt;
};

int main() {

	int c;

	cin >> c;

	while (c--) {

		int s, t;

		cin >> s >> t;

		queue<info> q;

		q.push({ s,t,0 });

		while (!q.empty()) {

			info now = q.front();

			q.pop();

			if (now.s > now.t) continue;

			if (now.s == now.t) {
				cout << now.cnt << "\n";
				break;
			}

			info strong = { now.s * 2, now.t + 3, now.cnt + 1 };

			q.push(strong);

			info safe = { now.s + 1, now.t, now.cnt + 1 };

			q.push(safe);
		}
		

	}

	return 0;
}