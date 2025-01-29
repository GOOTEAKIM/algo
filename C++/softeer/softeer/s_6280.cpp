#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

	int n;

	cin >> n;
	
	vector<int> arr(16, 0);

	arr[0] = 4;

	for (int i = 1; i <= n; i++) {
		int num = sqrt(arr[i - 1]);
		
		num = 2 * num - 1;

		arr[i] = num * num;

	}

	cout << arr[n] << endl;

	return 0;
}

