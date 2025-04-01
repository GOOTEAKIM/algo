#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string word;

	getline(cin, word);
		
	string sub = "";
			
	string ans = "";

	bool flag = false;

	for (auto spell : word) {

		if (spell == '<') {
			reverse(sub.begin(), sub.end());
			
			ans += sub;

			sub = "";

			flag = true;

			ans += spell;
		}

		else if (spell == '>') {
			ans += spell;
			flag = false;
		}

		else if (flag) {  
			ans += spell;
		}

		else if (spell == ' ') {

			reverse(sub.begin(), sub.end());

			ans += sub;
			sub = "";
			ans += " ";
		}

		else {  // �Ϲ� ���� (�ܾ� ����)
			sub += spell;
		}

	}

	// ������ �ܾ� ó��
	reverse(sub.begin(), sub.end());
	ans += sub;

	cout << ans;

	return 0;
}