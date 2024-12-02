#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector <int> solution(string my_string) {

	vector<int> answer(52,0);

	for (char ch : my_string) {

		if ('A' <= ch && ch <= 'Z') {
			answer[ch - 'A']++;
		}
		else if ('a' <= ch && ch <= 'z') {
			answer[ch - 'a' + 26]++;
		}

	}

	return answer;

}