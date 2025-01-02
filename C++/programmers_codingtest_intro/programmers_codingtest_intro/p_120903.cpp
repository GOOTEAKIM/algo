#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {

	int ans=0;


	for (string wow : s1) {

		if (find(s2.begin(), s2.end(), wow) != s2.end()) {
			ans++;
		}

	}

	return ans;

}