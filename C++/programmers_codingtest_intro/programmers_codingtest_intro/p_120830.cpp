#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int k) {

	k -= (n/ 10);

	return (12000 * n) + (k * 2000);
}