#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {

	int num = 0;

	while (true) {

		int up = 0;

		int down = 0;

		for (auto number : citations) {

			if (number >= num) {
				up++;
			}
			else
			{
				down++;
			}

		}

		if (up >= num && down <= num) {
			num++;
		}

		else
		{
			num--;
			break;
		}

	}

	return num;
}