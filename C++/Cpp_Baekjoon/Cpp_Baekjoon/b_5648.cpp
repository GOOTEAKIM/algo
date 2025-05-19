#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct number
{
	long long origin;

	long long changed;

	number(long long val) : origin(val) {

		changed = 0;

		long long x = val;

		while (x > 0) {

			changed = x % 10 + changed * 10;

			x /= 10;
		}

	}

	bool operator<(const number& other) const {
		return changed < other.changed;
	}

};

int main() {

	int n;

	cin >> n;

	vector<number> arr;

	while (n--) {

		long long val;
		cin >> val;

		arr.push_back(val);

	}

	sort(arr.begin(), arr.end());

	for (auto num : arr) {
		cout << num.changed << "\n";
	}

	return 0;
}