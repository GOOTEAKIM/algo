#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N, K;

int arr[1000];

int path[10]; // 경로

/*
void func(int now, int sum) {

	// 2. 기저 조건 // base case // 언제 멈출 것인가?
	if (now >= K) { // k-1 까지 뽑고 k 부터는 뽑지 마라

		for (int i = 0; i < K; i++) {

			cout << path[i] << " ";
		}
		cout << " = " << sum << endl;
		return;
	}

	// 1. 재귀 기본
	for (int i = 0; i < N; i++) {

		// 3. 앞으로 진행하면서 실행되는 코드
		path[now] = arr[i];	// index = now 번째, value = 뽑은 수
		 
		func(now + 1, sum + arr[i]); // 가라~
	}

}
*/

int sum = 0;

void func(int now) {

	// 2. 기저 조건, 언제 멈출 것인가?
	if (now >= K) {

		int flag = 0; // 잘못된 형태인가?

		for (int i = 0; i < K-1; i++) { 

			if (abs(path[i] - path[i+1]) == 1) { // 인접하는 수의 차이가 1이다?
				flag = 1; // 잘못된 형태이다.
			}

		}

		if (!flag) {
			for (int i = 0; i < K; i++) {
				cout << path[i] << " ";
			}
			cout << " = " << sum << "\n";
		}
		return;
	}

	// 1. 재귀 기본

	for (int i = 0; i < N; i++) {

		// 5. 판별, 이 선택을 하는게 맞는가?

		// 3. 계산 및 처리
		path[now] = arr[i];
		
		sum += arr[i];

		func(now + 1); // 가라

		// 4. 복구

		sum -= arr[i]; // 계산을 복구

		path[now] = 0; // 0으로 초기화
	}

}


int main() {

	cin >> N >> K; // n 개 정수 중 k 개 뽑는다
	 
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