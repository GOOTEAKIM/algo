#include <iostream>
#include <vector>

using namespace std;

int solution(int slice, int n) {

	if (n % slice == 0) {
		return n / slice;
	}
	return (n / slice) + 1;
}