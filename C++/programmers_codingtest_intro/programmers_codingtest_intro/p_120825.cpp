#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {

	//for (char my:my_string) {
	//	for (int i = 0; i < n; i++) {
	//		answer += my;
	//	}
	//}
	string answer="";

	for (const auto my : my_string) {
		answer += string(n, my);
	}

	return answer;
}