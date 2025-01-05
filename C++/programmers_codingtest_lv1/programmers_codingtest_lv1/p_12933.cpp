#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

long long solution(long long n) {

	long long ans = 0;

	string number = to_string(n);

	sort(number.begin(), number.end(), greater<char>());

	ans = stoll(number);

	return ans;
}