#include <iostream>
#include <string>

using namespace std;

int solution(int a, int b);

int main() {

	int a, b;

	cin >> a >> b;

	int result = solution(a, b);

	cout << result << endl;

	return 0;
}

int solution(int a, int b) {

	string result1 = to_string(a) + to_string(b);

	int result2 = 2 * a * b;

	if (stoi(result1) >= result2) {
		return stoi(result1);
	}
	else
	{
		return result2;
	}

}