#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {

	// �߾ӿ� �� ��ġ
	// �� ���� ������ ��
	// ���� �Դ� ���� ���� ���� ���ƾ� ��, ������
	// Į�θ� ���� �� ���� ���� �� ����

	string ans = "";

	string rev = "";

	for (int i = 1; i < food.size(); i++) {
		int count = food[i] / 2;
		ans += string(count, '0' + i);
		rev = string(count, '0' + i) + rev;
	}

	ans += "0";

	ans += rev;

	return ans;
}