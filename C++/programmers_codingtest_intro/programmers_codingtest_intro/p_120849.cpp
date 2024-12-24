#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

string solution(string my_string) {

	string answer = "";
	unordered_set<char> mo = { 'a', 'e', 'i', 'o', 'u' };

	for (char my : my_string) {
		if (mo.find(my) == mo.end()) {
			answer += my;
		}
	}

	return answer;
}