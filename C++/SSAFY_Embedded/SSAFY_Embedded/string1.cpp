#include <iostream>
#include <string>

using namespace std;

int main() {

	/*
	char str1[100] = "AAB";
	string str2 = "AAB";

	//strlen("AAB");

	cout << str2.length(); // 컴파일러마다 counting

	cout << str2.size();
	*/

	string str1 = "AAA";
	string str2 = "AACCCAB";

	if (str1 < str2) cout << "왼쪽이 빠름" << "\n";
	if (str1 > str2) cout << "오른쪽이 빠름" << "\n";
	if (str1 == str2) cout << "같다" << "\n";

	cout << str2.size() << "\n";

	//strcpy()
	string str3;
	str3 = str2;

	//cout << str3 << "\n";

	//strcat() 문자열 이어 붙이기

	string str4 = str1 + str3;

	// + operator() : 더해서 새로운 문자열을 만든다
	// 더할 때 둘 중 하나는 string 이어야 한다

	//cout << str4 << "\n";

	//cout << "aaa" + str4 << "\n";

	// erase()

	str2.erase(2); // 인덱스 2부터 끝까지 지운다
	//str2.erase(1, 3); // 인덱스 1부터 3개 지워진다
	cout << str2 << "\n";

	return 0;
}