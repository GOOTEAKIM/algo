#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {

	vector <int> ans;
	
	vector<int> sheet;

	int cnt = 0;

	int legend = 0;

	for (int people : score) {

		if (cnt < k) {
			sheet.push_back(people);
			sort(sheet.begin(), sheet.end());
			legend = sheet[0];
			ans.push_back(legend);
			cnt++;
		}
		else
		{
			if (people > legend) {
				sheet.erase(sheet.begin());
				sheet.push_back(people);
				sort(sheet.begin(), sheet.end());
				legend = sheet[0];
				ans.push_back(legend);
				cnt++;
			}
			else
			{
				legend = sheet[0];
				ans.push_back(legend);
				cnt++;
			}
		}

	}

	return ans;
}