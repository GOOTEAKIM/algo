#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		long long num;
		cin >> num;

		// �������� ��츸 ��� ������ Ȧ����

		long long root = (long long)sqrt(num);

		if (root * root == num) cout << 1 << " ";
		else cout << 0 << " ";

	}

	return 0;
}