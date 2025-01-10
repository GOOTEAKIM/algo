#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int n) {

	int service = 0;

	while (n >= a) {
		
		service += (n / a) * b;
		n = (n % a) + (n/a)*b;
	
	}

	return service;
}