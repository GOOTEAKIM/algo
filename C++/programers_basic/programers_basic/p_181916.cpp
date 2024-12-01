#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

int solution(int a, int b, int c, int d) {

	// 4개 다 같은 경우

	if (a == b && b == c && c == d) return 1111 * a;

	int dice[7] = { 0 };
	int p = 0;

	dice[a]++;
	dice[b]++;
	dice[c]++;
	dice[d]++;


	// 3개가 같은 경우

	for (int i = 1; i <= 6; i++) {
		if (dice[i] == 3) {
			for (int j = 1; j <= 6; j++) {
				if (dice[j] == 1 ) {
					return (10 * i + j) * (10 * i + j);
				}
			}
		}
	}

	// 2개가 같은 경우

	for (int i = 1; i <= 6; i++) {
		if (dice[i] == 2) {
			for (int j = 1; j <= 6; j++) {
				if (dice[j] == 2 && j != i) {
					return (i + j) * abs(i - j);
				}
			}
		}
	}

	// 2개는 같고 하나 하나 다른 경우

	for (int i = 1; i <= 6; i++) {
		if (dice[i] == 2) {
			int q = 0, r = 0;
			for (int j = 1; j <= 6; j++) {
				if (dice[j] == 1 && j != i) {
					if (q == 0) {
						q = j;
					}
					else
					{
						r = j;
						break;
					}
				}
			}
			return q * r;
		}
	}

	// 다 다른 경우

	return min({ a, b, c, d });

}