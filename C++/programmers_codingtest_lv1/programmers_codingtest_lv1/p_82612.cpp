#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int price, int money, int count) {

	long long ans = 0;

	int initial = price;

	for (int i = 0; i < count; i++) {
		ans += price;
		price += initial;
	}

	if (ans > money) {

		return ans - money;
	}
	else
	{
		return 0;
	}
}