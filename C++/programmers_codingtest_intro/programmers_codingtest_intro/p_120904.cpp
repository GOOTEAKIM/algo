#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(int num, int k) {

	int ans = 0;

	string wow = to_string(num);

	for (int i = 0; i < wow.length(); i++) {

		int woo = wow[i] - '0';

		if (woo == k) {
			return (i + 1);
			break;
		}

	}

	return -1;
}