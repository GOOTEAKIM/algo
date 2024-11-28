#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // C 스타일 입출력과 동기화 해제
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = n; i > 0; i--) {
		cout << i << "\n";
	}

	return 0;
}