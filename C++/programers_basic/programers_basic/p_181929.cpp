#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {



	return 0;
}

int solution(vector<int> num_list) {

	int mul = 1;

	for (int i = 0; i < num_list.size(); i++) {

		mul *= num_list[i];
	}

	int hop = accumulate(num_list.begin(), num_list.end(), 0);

	hop = hop * hop;

	if (mul < hop) {
		return 1;
	}
	else
	{
		return 0;
	}
}