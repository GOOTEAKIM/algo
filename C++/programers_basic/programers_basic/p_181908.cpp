#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

int solution(string my_string, string is_suffix) {

	int answer = 0;

	vector<string> books;

	for (int i = 0; i < my_string.length(); i++) {
		string word = my_string.substr(i);
		books.push_back(word);
	}

	if (find(books.begin(), books.end(), is_suffix) != books.end())  {
		answer = 1;
	}

	return answer;

}