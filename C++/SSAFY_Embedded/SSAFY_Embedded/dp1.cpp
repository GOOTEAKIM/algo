#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

DP

과거의 데이터를 기반으로 현재 데이터를 만든다


바텁업, 탑다운 방식이 있다.

둘 다 풀 수 있다. 문제에 따라 선택하는 식

바텁업으로 풀면 시간초과가 거의 안난다.

*/

/*

정답을 구하면 메모하고, 다음에 또 이걸 구해야할 때 메모를 확인

-> 메모이제이션

*/

int memo[1000];

int getResult(int n) {

	// n의 정답은?

	// 메모이제이션
	if (memo[n] != 0) return memo[n];

	if (n == 0) return 0;
	if (n == 1) return 1;

	int a = getResult(n - 2);
	int b = getResult(n - 1);

	// 메모이제이션이 성능이 빠르다
	memo[n] = a + b;

	return a + b;
}

int main() {

	int arr[10] = { 0,1 };

	for (int i = 2; i < 10; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	// 피보 : 바닥부터 채우니까 bottom up
	
	int ret = getResult(4);

	cout << ret;

	return 0;
}