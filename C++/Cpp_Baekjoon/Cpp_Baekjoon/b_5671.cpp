#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>

using namespace std;

int solution(int low, int high);

int main() {

	int low, high;

	while (scanf("%d%d", &low, &high) != EOF) {

		cout << solution(low, high) << endl;
	}

	return 0;
}

int solution(int low, int high) {

	int cnt = 0;

	for (int i = low; i <= high; i++) {

		string num = to_string(i);
		
		unordered_set <char> book;

		bool unique = true;

		for (char nuum : num) {
			// 만약 있다면?
			if (book.count(nuum)) {
				unique = false;
				break;
			}
			else
			{
				book.insert(nuum);
			}
		}

		if (unique) {
			cnt++;
		}
	}
	return cnt;
}