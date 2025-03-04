#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int k;

vector<int> inorder_values;

vector<vector<int>> levels;

int idx = 0;

void fill_tree(int level, int start, int end) {

	if (start > end) return;

	int mid = (start + end) / 2;

	fill_tree(level + 1, start, mid - 1);

	levels[level].push_back(inorder_values[idx++]);

	fill_tree(level + 1, mid + 1, end);

}

int main() {

	cin >> k;

	int num = pow(2, k) - 1;

	inorder_values.resize(num);
	levels.resize(num);

	for (int i = 0; i < num; i++) {
		cin >> inorder_values[i];
	}

	fill_tree(0, 0, num - 1);

	for (int i = 0; i < k; i++) {
		for (int val : levels[i]) {
			cout << val << " ";
		}
		cout << "\n";
	}

	return 0;
}