#include <iostream>
#include <string>

using namespace std;

int main() {

	/*
	char str1[100] = "AAB";
	string str2 = "AAB";

	//strlen("AAB");

	cout << str2.length(); // �����Ϸ����� counting

	cout << str2.size();
	*/

	string str1 = "AAA";
	string str2 = "AACCCAB";

	if (str1 < str2) cout << "������ ����" << "\n";
	if (str1 > str2) cout << "�������� ����" << "\n";
	if (str1 == str2) cout << "����" << "\n";

	cout << str2.size() << "\n";

	//strcpy()
	string str3;
	str3 = str2;

	//cout << str3 << "\n";

	//strcat() ���ڿ� �̾� ���̱�

	string str4 = str1 + str3;

	// + operator() : ���ؼ� ���ο� ���ڿ��� �����
	// ���� �� �� �� �ϳ��� string �̾�� �Ѵ�

	//cout << str4 << "\n";

	//cout << "aaa" + str4 << "\n";

	// erase()

	str2.erase(2); // �ε��� 2���� ������ �����
	//str2.erase(1, 3); // �ε��� 1���� 3�� ��������
	cout << str2 << "\n";

	return 0;
}