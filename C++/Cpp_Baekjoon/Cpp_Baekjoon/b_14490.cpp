#include <iostream>
#include <string>
#include <numeric>
#include <cmath>

using namespace std;

int main() {

	string word;

	cin >> word;

	string n, m;

	int idx = word.find(':');

	n = word.substr(0, idx);

	m = word.substr(idx+1);

	long long N = stoll(n);

	long long M = stoll(m);

	int cnt = gcd(N, M);

	N /= cnt, M /= cnt;

	cout << N << ":" << M;

	return 0;
}