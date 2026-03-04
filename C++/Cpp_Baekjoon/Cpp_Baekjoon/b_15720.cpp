#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

	int b, c, d;

	cin >> b >> c >> d;

	vector<int> burger(b),side(c),soda(d);

	for (int &x: burger) cin >> x;
	for (int &x: side) cin >> x;
	for (int &x: soda) cin >> x;

	sort(burger.rbegin(), burger.rend());
	sort(side.rbegin(), side.rend());
	sort(soda.rbegin(), soda.rend());

	int minimum = min({b,c,d});

	int for_sale = 0;

	for (int i = 0; i < minimum; i++) for_sale += (burger[i] + side[i] + soda[i]);

	int not_sale = for_sale;

	for_sale = for_sale * 9 / 10;

	for (int i = minimum; i < b; i++) not_sale += burger[i], for_sale += burger[i];
	for (int i = minimum; i < c; i++) not_sale += side[i], for_sale += side[i];
	for (int i = minimum; i < d; i++) not_sale += soda[i], for_sale += soda[i];

	cout << not_sale << "\n" << for_sale;

	return 0;
}