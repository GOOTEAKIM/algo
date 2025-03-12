#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/*

백트래킹 문제인지 어떻게 알까?

조합, 경우의 수, 경로의 수, 최대값 / 최소값의 차이가 얼마인가?

N의 크기가 보통 20 ~ 30인데 가지치기, 조건으로 불필요한 연산을 줄이는게 목표다.

*/

// N개의 주사위 눈의 조합으로 나올 수 있는 조합 출력
// 같은 눈은 사용 불가

int n;

int arr[10];

int path[10];

int dat[7]; // 1부터 6까지의 눈금 사용 여부

void func(int now) {

	if (now - 1 > 0 && dat[path[now - 1]] >= 2) return;

	// 2. 기저
	if (now >= n) {

		for (int i = 0; i < n; i++) {
			cout << path[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= 6; i++) {
		// 3. 판별
		if (dat[i] == 1) continue;

		// 4. 기록 및 계산
		path[now] = i;

		dat[i] += 1; // 값을 누적

		// 1. 재귀 가라
		func(now + 1);

		// 5. 기록 및 계산을 복구
		path[now] = 0;
		dat[i] -= 1;
	}
}

int main() {

	cin >> n;

	func(0);

	return 0;
}