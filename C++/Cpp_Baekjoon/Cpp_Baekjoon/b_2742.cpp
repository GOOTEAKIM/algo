#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // C ��Ÿ�� ����°� ����ȭ ����
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = n; i > 0; i--) {
		cout << i << "\n";
	}

	return 0;
}