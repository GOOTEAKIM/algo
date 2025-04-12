#include <iostream>
#include <string>

using namespace std;

int main() {

	string str1 = "BBB";
	string str2 = "AACCCAB";
	string str3 = "aaaaaaaaa";

	// insert

	//str1.insert(1, "CCC"); // 특정 인덱스에 원하는 문자열 삽입
	
	str1.insert(1, "AAAAA", 3);
	
	cout << str1 << "\n";

	// replace ()

	//str3.replace(1, 3, 10,'z'); // 인덱스 1부터 3까지 z 10개로 변경

	cout << str3 << "\n";

	// substr () : 부분 문자열 추출

	string word = str2.substr(1, 2);

	cout << word << "\n"; 

	// find ()

	int pos = str3.find('a'); 
	// pos == 0 :해당 문자열을 찾음
	// pos == -1 :해당 문자열을 못찾음

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