#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int solution(vector<int> order) {

	int ans = 0;

	stack<int> st;

	for (int i = 1; i <= order.size(); i++) {

		st.push(i);

		while (!st.empty() && st.top() == order[ans]) {
			st.pop();
			ans++;
		}

	}
	return ans;
}
