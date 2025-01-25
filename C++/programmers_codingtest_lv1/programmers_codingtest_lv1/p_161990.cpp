#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {

	vector<int> ans;

	int min_y = wallpaper.size();
	int max_y = -1;
	int min_x = wallpaper[0].size();
	int max_x = -1;

	for (int i = 0; i < wallpaper.size(); i++) {

		for (int j = 0; j < wallpaper[i].size(); j++) {

			if (wallpaper[i][j] == '#') {

				min_y = min(min_y, i);
				max_y = max(max_y, i);				
				
				min_x = min(min_x, j);
				max_x = max(max_x, j);

			}

		}

	}

	ans = { min_y, min_x, max_y + 1, max_x + 1 };

	return ans;
}