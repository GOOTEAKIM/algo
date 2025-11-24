#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(const string& a, const string& b) {

	if (a.length() != b.length()) {

		return a.length() < b.length();

	}

	int sum_a = 0, sum_b = 0;

	for (int i = 0; i < a.length(); i++) {

		if (isdigit(a[i])) sum_a += (a[i] - '0');
		if (isdigit(b[i])) sum_b += (b[i] - '0');
		
	}

	if (sum_a != sum_b) {
		return sum_a < sum_b;
	}

	return a < b;

}

int main() {

	int n;

	cin >> n;

	vector<string> alis(n);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis.begin(), alis.end(), cmp);

	for (auto next : alis) {
		cout << next << "\n";
	}

	return 0;
}