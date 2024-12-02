#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e);

int main() {

	string my_string;
	int s, e;

	cin >> my_string;
	cin >> s >> e;

	cout << solution(my_string, s, e) << endl;

	return 0;
}

string solution(string my_string, int s, int e) {

	reverse(my_string.begin() + s, my_string.begin() + e+1);

	return my_string;
}