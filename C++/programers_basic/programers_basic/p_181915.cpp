#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	return 0;
}

string solution(string my_strng, vector<int> index_list) {

	string answer;

	for (int i : index_list) {
		answer += my_strng[i];
	}

	return answer;

}