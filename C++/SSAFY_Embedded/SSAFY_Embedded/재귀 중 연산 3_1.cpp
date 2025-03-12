#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N, K;

int arr[1000];

int path[10]; // 경로

int DAT[10];

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

// N개 정수 중 K개를 이용해서 만들 수 있는 수들의 합을 구하시오.
// 인접한 수가 1 차이나거나, 이미 뽑은 수는 뽑을 수 없다.

int sum = 0;

void func(int now) {

	// 2. 기저 조건, 언제 멈출 것인가?
	if (now >= K) {

		for (int i = 0; i < K; i++) {
			cout << path[i] << " ";
		}

		cout << " = " << sum << "\n";
		
		return;
	}

	// 1. 재귀 기본

	for (int i = 0; i < N; i++) {

		// 5. 판별, 이 선택을 하는게 맞는가?
		
		// 백트래킹, 가능성 여부로 선택
		
		if (now > 0 && abs(path[now - 1] - arr[i]) == 1) continue;

		if (DAT[arr[i]] == 1) continue;

		// 3. 계산 및 처리
		path[now] = arr[i];

		DAT[arr[i]] = 1; // index = 뽑은 숫자가, value 사용되었는가

		sum += arr[i];

		func(now + 1); // 가라

		// 4. 복구

		sum -= arr[i]; // 계산을 복구

		path[now] = 0; // 0으로 초기화

		DAT[arr[i]] = 0; // 기록 초기화  
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