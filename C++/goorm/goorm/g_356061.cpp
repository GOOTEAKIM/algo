#include <iostream>
#include <cmath>

using namespace std;

int main() {

	long long n;

	cin >> n;

	long long mok = sqrt((long double)n);

	if (mok * mok == n) cout << mok;

	else cout << mok + 1;
	
	return 0;
}