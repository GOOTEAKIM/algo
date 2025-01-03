#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {

	vector<int> garo;
	vector<int> sero;

	for (auto dot : dots) {

		garo.push_back(dot[0]);
		sero.push_back(dot[1]);
	}

	sort(garo.begin(), garo.end());
	sort(sero.begin(), sero.end());

	int ga = *max_element(garo.begin(), garo.end()) - *min_element(garo.begin(), garo.end());
	int se = *max_element(sero.begin(), sero.end()) - *min_element(sero.begin(), sero.end());

	return ga * se;
}