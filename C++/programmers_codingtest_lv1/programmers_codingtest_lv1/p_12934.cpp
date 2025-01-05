#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {

	long long small = sqrt(n);

	if (small * small == n) {
		return (small+ 1) * (small + 1);
	}
	else
	{
		return -1;
	}
}