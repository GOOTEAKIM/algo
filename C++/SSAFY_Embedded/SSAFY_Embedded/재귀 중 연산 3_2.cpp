#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/*

��Ʈ��ŷ �������� ��� �˱�?

����, ����� ��, ����� ��, �ִ밪 / �ּҰ��� ���̰� ���ΰ�?

N�� ũ�Ⱑ ���� 20 ~ 30�ε� ����ġ��, �������� ���ʿ��� ������ ���̴°� ��ǥ��.

*/

// N���� �ֻ��� ���� �������� ���� �� �ִ� ���� ���
// ���� ���� ��� �Ұ�

int n;

int arr[10];

int path[10];

int dat[7]; // 1���� 6������ ���� ��� ����

void func(int now) {

	if (now - 1 > 0 && dat[path[now - 1]] >= 2) return;

	// 2. ����
	if (now >= n) {

		for (int i = 0; i < n; i++) {
			cout << path[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= 6; i++) {
		// 3. �Ǻ�
		if (dat[i] == 1) continue;

		// 4. ��� �� ���
		path[now] = i;

		dat[i] += 1; // ���� ����

		// 1. ��� ����
		func(now + 1);

		// 5. ��� �� ����� ����
		path[now] = 0;
		dat[i] -= 1;
	}
}

int main() {

	cin >> n;

	func(0);

	return 0;
}