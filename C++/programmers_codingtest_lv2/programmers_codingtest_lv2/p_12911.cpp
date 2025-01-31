#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int counting(int n) {

	int cnt = 0;

	while (n > 0) {
		if (n % 2 == 1) {
			cnt++;
		}
		n /= 2;
	}
	return cnt;
}

int solution(int n) {

	int cmp = counting(n);

	while (true) {
		n++;

		if (counting(n) == cmp) {
			break;
		}

	}
	return n;

}
