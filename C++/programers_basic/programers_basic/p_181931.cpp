#include <iostream>
#include <vector>
using namespace std;

int main() {




	return 0;
}

int solution(int a, int d, vector<bool> included) {

	vector<int> num_list(included.size());

	for (int i = 0; i < included.size(); i++) {

		num_list[i] = a + i * d;

	}

	int result = 0;

	for (int i = 0; i < included.size(); i++) {
		if (included[i] == true) {
			result += num_list[i];
		}
	}

	return result;
}