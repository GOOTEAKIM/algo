#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, int k);

int main() {

	string my_string;
	int k;

	cin >> my_string;
	cin >> k;

	string result = solution(my_string, k);

	cout << result << endl;

	return 0;
}

string solution(string my_string, int k) {

	string result;

	for (int i = 0; i < k; i++) {

		result += my_string;
	}

	return result;

}