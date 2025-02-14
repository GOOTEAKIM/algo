#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

struct comp
{
	bool operator() (int a, int b) {
		if (abs(a) == abs(b)) {
			// 절댓값이 작은걸 먼저 출력
			return a > b;
		}
		else
		{
			return abs(a) > abs(b);
		}
	}
};

int main() {

	int n;

	cin >> n;

	priority_queue <int, vector<int>, comp> q;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		if (num == 0) {

			if (q.empty()) {
				cout << 0 << "\n";
			}

			else
			{
				cout << q.top() << "\n";
				q.pop();
			}

		}
		else
		{
			q.push(num);
		}
	}

	return 0;
}