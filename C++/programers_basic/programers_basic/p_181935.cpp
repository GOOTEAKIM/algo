#include <iostream>

using namespace std;

int solution(int n);

int main() {

	int n;

	cin >> n;

	int result = solution(n);

	cout << result << endl;

	return 0;
}

int solution(int n) {

	int total = 0;

	if (n % 2 == 0) {
		for (int i = n; i > 0; i -=2) {
			total += i*i;
		}
		return total;
	}
	else
	{
		for (int i = n; i > 0; i -= 2) {
			total += i;
		}
		return total;
	}
}