#include <iostream>
#include <vector>

using namespace std;

/*

1. double(num2)�� ����:

double(num2)�� num2�� double ������ ��ȯ�մϴ�.
���� ���, num2 = 2�� ���, ���� 2�� �Ǽ� 2.0���� ��ȯ�˴ϴ�.
C++������ ���� �� �ǿ����� �� �ϳ��� �Ǽ�(float �Ǵ� double)���, �ٸ� �ǿ����ڵ� �ڵ����� �Ǽ��� ��ȯ�˴ϴ�. �̸� **�Ϲ��� �� ��ȯ(Implicit Type Conversion)**�̶�� �մϴ�.

2. �Ǽ� ������:

num1�� ������ �ص�, num2�� �Ǽ��� ��ȯ�Ǿ��� ������, num1 / double(num2)�� �Ǽ� �������� �����մϴ�.
��: 3 / 2.0 = 1.5.
*/

int solution(int num1, int num2) {
	return num1 / double(num2) * 1000;
}