#include <iostream>

using namespace std;

int solution(int number, int n, int m);

int main() {

	int number, n, m;

	cin >> number >> n >> m;

	int result = solution(number, n, m);

	cout << result << endl;

	return 0;
}

int solution(int number,int n, int m) {

	return number % n == 0 && number % m == 0 ? 1 : 0;
}