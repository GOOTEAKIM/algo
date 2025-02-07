#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> splitAndConvert(const string& s) {

	vector<int> result;

	stringstream ss(s);

	string temp;

	while (getline(ss, temp, '.')) {
		result.push_back(stoi(temp));
	}

	return result;
}


bool compareVersions(const string& a, const string& b) {

	return splitAndConvert(a) < splitAndConvert(b);

}

int main() {

	int n;

	cin >> n;

	vector<string > arr(n);

	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end(), compareVersions);

	for (auto ans : arr) {
		cout << ans << "\n";
	}

	return 0;
}