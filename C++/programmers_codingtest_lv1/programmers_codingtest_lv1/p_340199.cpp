#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {

	int ans = 0;



	while (true) {

		int wallet_small = min(wallet[0], wallet[1]);
		int wallet_big = max(wallet[0], wallet[1]);

		int bill_small = min(bill[0], bill[1]);
		int bill_big = max(bill[0], bill[1]);

		if (bill_small <= wallet_small && bill_big <= wallet_big) {
			break;
		}

		if (bill[0] > bill[1]) {
			bill[0] /= 2;
		}
		else
		{
			bill[1] /= 2;
		}

		ans++;

	}

	return ans;
}