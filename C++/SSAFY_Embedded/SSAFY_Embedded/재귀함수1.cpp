/*

	����Լ�:

	�ٽ� ���ư��� �Լ� 
	return

	��ǻ�� ������ ����
	����(�ӵ�)�� ������

	���� == run

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