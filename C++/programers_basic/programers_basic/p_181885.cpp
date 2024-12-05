#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<string> solution(vector<string> todo_list, vector<bool> finished) {

	vector<string> answer;

	for (int i = 0; i < finished.size(); i++) {
		if (finished[i] == false) {
			answer.push_back(todo_list[i]);
		}
	}

	return answer;

}