#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int> arr) {

	int first = -1, last = -1;

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == 2) {
			if (first == -1) {
				first = i;
			}
			last = i;
		}
	}

	if (first == -1) {
		return { -1 };
	}

	return vector<int>(arr.begin() + first, arr.begin() + last + 1);

}