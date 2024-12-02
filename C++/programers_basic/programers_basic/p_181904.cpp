#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int m, int c);

int main() {

	string my_string;
	int m, c;

	cin >> my_string;
	cin >> m >> c;

	cout << solution(my_string, m, c) << endl;

	return 0;
}

string solution(string my_string, int m, int c) {

	string answer = "";

	for (int i = 0; i < my_string.length()/m; i++) {

		answer += my_string[i * m + c-1];
	}
	
	return answer;
}