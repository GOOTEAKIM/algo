#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {

	int ans = 1;
	
	int i = 1;

	while (true) {

		ans *= i;
		if (ans > n) {
			return i - 1;
		}
		i++;
	}
}