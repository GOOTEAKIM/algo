#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {

	vector<vector<int>> ans;

	for (auto individ : data) {

		int code = individ[0];
		int date = individ[1];
		int maximum = individ[2];
		int remain = individ[3];

		if (ext == "date") {

			if (date < val_ext) {
				ans.push_back(individ);
			}

		}
		else if (ext == "code") {
			if (code < val_ext) {
				ans.push_back(individ);
			}
		}
		else if (ext == "maximum") {
			if (maximum < val_ext) {
				ans.push_back(individ);
			}
		}
		else
		{
			if (remain < val_ext) {
				ans.push_back(individ);
			}
		}

	}

	int column = 0;

	if (sort_by == "code") {
		column = 0;
	}
	else if (sort_by == "date") {
		column = 1;
	}
	else if (sort_by == "maximum") {
		column = 2;
	}
	else
	{
		column = 3;
	}

	sort(ans.begin(), ans.end(), [column](const vector<int>& a, const vector<int>& b) {

		return a[column] < b[column];
	});

	return ans;
}