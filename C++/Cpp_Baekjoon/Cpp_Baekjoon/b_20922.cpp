#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int visited[100001];

int main() {

	int n, k;
	
	cin >> n >> k;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	// �� ������
	int st = 0, en = 0; // ����, ������ �� �� 0���� ����

	int ans = 0;

	for (int st = 0; st < n; st++) {

		while (en < n && visited[alis[en]] < k) {

			visited[alis[en]]++;
			en++;

		}

		ans = max(ans, en - st);

		visited[alis[st]]--;

	}

	cout << ans;

	return 0;
}