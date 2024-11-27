#include <iostream>
#include <string>
using namespace std;

int solution(string ineq, string eq, int n, int m);

int main() {

	string ineq, eq;
	int n, m;

	cin >> ineq >> eq >> n >> m;

	int result = solution(ineq, eq, n, m);

	cout << result << endl;

	return 0;
}

int getAnswer(string ineq, string eq, int n, int m) {

	if (eq == "=" && n == m) return 1;
	if (ineq == "<" && n < m) return 1;
	if (ineq == ">" && n > m) return 1;
	return 0;
}

int solution(string ineq, string eq, int n, int m) {

	return getAnswer(ineq, eq, n, m);

}