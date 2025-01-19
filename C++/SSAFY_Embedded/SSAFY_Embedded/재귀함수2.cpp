#include <iostream>
#include <vector>

using namespace std;

int N;

void func(int now) {

	// 2. 종료조건
	if (N == now) {
		return;
	}

	// 3-1. 다음으로 진행하면서 실행되는 코드
	cout << now << " ";

	// 1. 기본 확인 재귀 호출
	func(now+1);
	
	// 3-2. 다시 돌아오면서 실행되는 코드
	cout << now << " ";

}

int main() {

	N = 5;
	func(0);

	return 0;
}