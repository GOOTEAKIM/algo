#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int num) {

	int cnt = 0;

	if (num == 1) {
		return 0;
	}
	else
	{
		while (num != 1) {
			if (cnt <= 500) {
				if (num % 2 == 0) {
					num /= 2;
				}
				else if (num % 2 == 1)
				{
					num = num * 3 + 1;
				}
				cnt++;
			}
			else
			{
				return -1;
			}
		}
	}

	return cnt;
}