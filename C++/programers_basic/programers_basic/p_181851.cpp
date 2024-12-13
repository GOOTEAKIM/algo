#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
	int answer = 0;

	vector<pair<int, int>> book;

	for (int i = 0; i < rank.size(); i++) {
		if (attendance[i]) {
			book.push_back({ rank[i],i });
		}
	}

	sort(book.begin(), book.end());
	
	int a = book[0].second;
	int b = book[1].second;
	int c = book[2].second;

	return 10000*a+100*b+c;
}