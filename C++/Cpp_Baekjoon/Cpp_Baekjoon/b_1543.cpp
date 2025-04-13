#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	string word;

	getline(cin, word);

	string prim;

	getline(cin, prim);

	int cnt = 0;

	size_t pos = 0;

	while((pos = word.find(prim,pos)) != string ::npos) {
		cnt++;
		
		pos += prim.length();
	}

	cout << cnt;

	return 0;
}