#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

	int n;

	cin >> n;

	string word;

	cin >> word;

	unordered_map <string, string> dict = {
		{"qw", "1"},
		{"as", "2"},
		{"zx", "3"},
		{"we", "4"},
		{"sd", "5"},
		{"xc", "6"},
		{"er", "7"},
		{"df", "8"},
		{"cv", "9"},
		{"ze", "0"}
	};

	int len = word.length();

	string ans = "";

	for (int i = 0; i < len - 1; i++) {

		string now = word.substr(i, 2);

		ans += dict[now];

	}

	cout << ans;

	return 0;
}