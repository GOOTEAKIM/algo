#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {

	int ans = 0;

	sort(people.begin(), people.end());

	int i = 0;
	int j = people.size() - 1;

	while (i <= j) {

		if (people[i] + people[j] <= limit) {
			i++;
		}
		j--;

		ans++;


	}

	return ans;
}
