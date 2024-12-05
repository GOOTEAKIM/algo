#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;

}

int solution(vector<int> num_list) {

	int holl = 0;
	int jjak = 0;

	for (int i = 0; i < num_list.size(); i++) {

		if (i % 2 == 0) {
			holl += num_list[i];
		}
		else
		{
			jjak += num_list[i];
		}
	}

	return max(holl, jjak);

}