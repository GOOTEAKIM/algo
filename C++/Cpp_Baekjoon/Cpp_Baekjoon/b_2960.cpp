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

		if (visited[i]) continue; // �湮�ߴٸ� ? �н�

		for (int j = i; j <= n; j += i) { // ��� Ž��
			
			if (!visited[j]) { // �湮 ���ߴٸ�?
				
				// �湮
				visited[j] = true;
				cnt++;

				if (cnt == k) { // k ��° ���̸�? ����
					
					cout << j;

					return 0;
				}
			}
		}
	}

	return 0;
}
