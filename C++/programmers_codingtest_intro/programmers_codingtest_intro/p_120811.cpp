#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
	sort(array.begin(), array.end());

	if (array.size() % 2 == 1) {
		return array[array.size() / 2];
	}
	else
	{
		return array[array.size() / 2 +1];
	}
}