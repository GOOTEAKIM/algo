#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<string> arr;

	for (int i = 0; i < n; i++) {

		string order, name;

		cin >> order >> name;

		if (order == "add") {

			arr.push_back(name);

		}
		else if (order == "find") {

			int len = name.length();

			int cnt = 0;

			for (string next : arr) {

				string now = next.substr(0, len);

				if (now == name) {
					cnt++;
				}

			}

			cout << cnt << "\n";

		}
	}

	return 0;
}