#include <iostream>
#include <string>

using namespace std;

int main() {

	string str1 = "BBB";
	string str2 = "AACCCAB";
	string str3 = "aaaaaaaaa";

	// insert

	//str1.insert(1, "CCC"); // Ư�� �ε����� ���ϴ� ���ڿ� ����
	
	str1.insert(1, "AAAAA", 3);
	
	cout << str1 << "\n";

	// replace ()

	//str3.replace(1, 3, 10,'z'); // �ε��� 1���� 3���� z 10���� ����

	cout << str3 << "\n";

	// substr () : �κ� ���ڿ� ����

	string word = str2.substr(1, 2);

	cout << word << "\n"; 

	// find ()

	int pos = str3.find('a'); 
	// pos == 0 :�ش� ���ڿ��� ã��
	// pos == -1 :�ش� ���ڿ��� ��ã��

	//cout << pos << "\n"; 

	if (pos == string::npos) {

		cout << "Now find" << "\n";
	}
	else
	{
		cout << "Find" << "\n";
	}


	return 0;
}