#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<vector<int>> arr(3,vector<int>(3));

	for (int i = 0; i < 3; i++) {
		

		for (int j = 0; j < 3; j++) {
			int n;
			
			cin >> n;

			arr[i][j] = n;

		}
	}

	vector<int> cost;

	for (int i = 0; i < 3; i++) {
		int row_min = *min_element(arr[i].begin(), arr[i].end());
		int row_max = *max_element(arr[i].begin(), arr[i].end());

		cost.push_back(row_max - row_min);

		vector<int> column;

		for (int j = 0; j < 3; j++) {
			column.push_back(arr[j][i]);
		}

		int col_min = *min_element(column.begin(), column.end());
		int col_max = *max_element(column.begin(), column.end());

		cost.push_back(col_max - col_min);
	}

	cout << *min_element(cost.begin(), cost.end()) << endl;

	return 0;

}