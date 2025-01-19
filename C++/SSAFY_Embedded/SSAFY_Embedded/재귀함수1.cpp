/*

	재귀함수:

	다시 돌아가는 함수 
	return

	컴퓨터 성능이 좋다
	실행(속도)가 빠르다

	실행 == run

*/

#include <iostream>
#include <vector>

using namespace std;

void func(int n) {

	for (int i = 0; i <= n; i++) {

		cout << i << " ";
	}
	cout << endl;
}

int main() {

	func(7);
	func(9);
	func(10);

	return 0;
}