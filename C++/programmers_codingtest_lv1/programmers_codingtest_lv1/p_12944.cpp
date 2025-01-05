#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {

	double ans = accumulate(arr.begin(), arr.end(), 0);

	return ans/arr.size();

}