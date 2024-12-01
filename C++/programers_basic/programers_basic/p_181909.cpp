#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<string> solution (string my_string) {

	vector<string> answer;

	for (int i = 0; i < my_string.length(); i++) {
		string word = my_string.substr(i);
		answer.push_back(word);
	}

	sort(answer.begin(), answer.end());

	return answer;

}