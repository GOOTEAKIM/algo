#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string number);

int main() {

	string number;

	cin >> number;

	cout << solution(number) << endl;

	return 0;
}

int solution(string number) {

	int result = 0;

	for (int i = 0; i < number.length(); i++) {

		result += number[i] - '0';

	}

	return result %= 9;

}
