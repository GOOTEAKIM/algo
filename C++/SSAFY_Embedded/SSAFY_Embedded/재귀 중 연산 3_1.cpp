#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N, K;

int arr[1000];

int path[10]; // ���

int DAT[10];

/*
void func(int now, int sum) {

	// 2. ���� ���� // base case // ���� ���� ���ΰ�?
	if (now >= K) { // k-1 ���� �̰� k ���ʹ� ���� ����

		for (int i = 0; i < K; i++) {

			cout << path[i] << " ";
		}
		cout << " = " << sum << endl;
		return;
	}

	// 1. ��� �⺻
	for (int i = 0; i < N; i++) {

		// 3. ������ �����ϸ鼭 ����Ǵ� �ڵ�
		path[now] = arr[i];	// index = now ��°, value = ���� ��

		func(now + 1, sum + arr[i]); // ����~
	}

}
*/

// N�� ���� �� K���� �̿��ؼ� ���� �� �ִ� ������ ���� ���Ͻÿ�.
// ������ ���� 1 ���̳��ų�, �̹� ���� ���� ���� �� ����.

int sum = 0;

void func(int now) {

	// 2. ���� ����, ���� ���� ���ΰ�?
	if (now >= K) {

		for (int i = 0; i < K; i++) {
			cout << path[i] << " ";
		}

		cout << " = " << sum << "\n";
		
		return;
	}

	// 1. ��� �⺻

	for (int i = 0; i < N; i++) {

		// 5. �Ǻ�, �� ������ �ϴ°� �´°�?
		
		// ��Ʈ��ŷ, ���ɼ� ���η� ����
		
		if (now > 0 && abs(path[now - 1] - arr[i]) == 1) continue;

		if (DAT[arr[i]] == 1) continue;

		// 3. ��� �� ó��
		path[now] = arr[i];

		DAT[arr[i]] = 1; // index = ���� ���ڰ�, value ���Ǿ��°�

		sum += arr[i];

		func(now + 1); // ����

		// 4. ����

		sum -= arr[i]; // ����� ����

		path[now] = 0; // 0���� �ʱ�ȭ

		DAT[arr[i]] = 0; // ��� �ʱ�ȭ  
	}

}


int main() {

	cin >> N >> K; // n �� ���� �� k �� �̴´�

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	//func(0, 0);

	func(0);

	return 0;
}

/*
input

4 3
1 2 3 4

*/