#include <iostream>
#include <vector>

using namespace std;

int N, K;

int arr[1000];

int DAT[10];

void func(int now, int sum) {

	if (now >= K) {

		for (int i = 0; i < K; i++) {

			cout << DAT[i] << " ";
		}
		cout << " = " << sum << endl;
		return;
	}

	for (int i = 0; i < N; i++) {

		DAT[now] = arr[i];

		func(now + 1, sum + arr[i]);
	}

}

int main() {
	
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	func(0,0);
	return 0;
}

/*
input

4 2 
1 2 3 4

*/