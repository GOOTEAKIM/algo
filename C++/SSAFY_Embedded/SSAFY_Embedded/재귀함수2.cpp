#include <iostream>
#include <vector>

using namespace std;

int N;

void func(int now) {

	// 2. ��������
	if (N == now) {
		return;
	}

	// 3-1. �������� �����ϸ鼭 ����Ǵ� �ڵ�
	cout << now << " ";

	// 1. �⺻ Ȯ�� ��� ȣ��
	func(now+1);
	
	// 3-2. �ٽ� ���ƿ��鼭 ����Ǵ� �ڵ�
	cout << now << " ";

}

int main() {

	N = 5;
	func(0);

	return 0;
}