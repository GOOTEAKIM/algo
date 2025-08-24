#include <iostream>
#include <string>

using namespace std;

int main() {

	string sentence;

	getline(cin, sentence);

	int one = 0;
	int big_i = 0;
	int small_l = 0;
	int backslash = 0;

	for (char spell : sentence) {

		if (spell == '1') {
			one++;
		}
		else if (spell == 'I') {
			big_i++;
		}
		else if (spell == 'l') {
			small_l++;
		}
		else if (spell == '|') {
			backslash++;
		}

	}

	cout << one << "\n" << big_i << "\n" << small_l << "\n" << backslash;

	return 0;
}