#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {

	int y1 = date1[0];
	int m1 = date1[1];
	int d1 = date1[2];

	int y2 = date2[0];
	int m2 = date2[1];
	int d2 = date2[2];

	if (y1 < y2) {
		return 1;
	}
	else if (y1 > y2) {
		return 0;
	}
	else // 만약 년도가 같다면
	{
		if (m1 < m2) {
			return 1;
		}
		else if (m1 > m2) {
			return 0;
		}
		else
		{
			if (d1 < d2) {
				return 1;
			}
			else if (d1 > d2) {
				return 0;
			}
		}
	}

}