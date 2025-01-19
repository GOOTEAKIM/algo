#include <iostream>
#include <vector>

using namespace std;

int N;
int DAT[10];

void func(int now) {

	if (N == now) {
		for (int i = 0; i < N; i++) {
			cout << DAT[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		
		DAT[now] = i;

		func(now + 1);

	}

}

int main() {

	cin >> N;
	func(0);

	return 0;
}