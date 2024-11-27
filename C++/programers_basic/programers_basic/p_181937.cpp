#include <iostream>

using namespace std;

int solution(int num, int n);

int main() {

	int num, n;

	cin >> num >> n;

	int result = solution(num, n);

	cout << result << endl;

	return 0;
}

int solution(int num, int n) {

	if (num % n == 0) {
		return 1;
	}
	else
	{
		return 0;
	}

}