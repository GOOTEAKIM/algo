#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

DP

������ �����͸� ������� ���� �����͸� �����


���Ӿ�, ž�ٿ� ����� �ִ�.

�� �� Ǯ �� �ִ�. ������ ���� �����ϴ� ��

���Ӿ����� Ǯ�� �ð��ʰ��� ���� �ȳ���.

*/

/*

������ ���ϸ� �޸��ϰ�, ������ �� �̰� ���ؾ��� �� �޸� Ȯ��

-> �޸������̼�

*/

int memo[1000];

int getResult(int n) {

	// n�� ������?

	// �޸������̼�
	if (memo[n] != 0) return memo[n];

	if (n == 0) return 0;
	if (n == 1) return 1;

	int a = getResult(n - 2);
	int b = getResult(n - 1);

	// �޸������̼��� ������ ������
	memo[n] = a + b;

	return a + b;
}

int main() {

	int arr[10] = { 0,1 };

	for (int i = 2; i < 10; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	// �Ǻ� : �ٴں��� ä��ϱ� bottom up
	
	int ret = getResult(4);

	cout << ret;

	return 0;
}