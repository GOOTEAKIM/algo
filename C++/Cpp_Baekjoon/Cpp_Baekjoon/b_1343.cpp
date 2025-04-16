#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	string board;

	cin >> board;

	string result = "";

	int i = 0;

	int n = board.length();

	while (i < n) {

		if (board[i] == 'X') {

			int j = i;

			while (j < n && board[j] == 'X') j++; // ���ӵ� X ���� ����

			int len = j - i;

			if (len % 2 != 0) { // Ȧ���� �׳� �Ұ�
				cout << -1;
				return 0;
			}

			int a_cnt = len / 4;

			int b_cnt = (len % 4) / 2;

			while (a_cnt--) result += "AAAA";
			while (b_cnt--) result += "BB";

			i = j;
		}
		else
		{
			result += ".";
			i++;
		}

	}

	cout << result;

	return 0;
}