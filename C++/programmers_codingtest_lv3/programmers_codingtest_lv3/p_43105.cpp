#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {

    for (int i = 1; i < triangle.size(); i++) {

        for (int j = 0; j < triangle[i].size(); j++) {

            if (j == 0) {

                triangle[i][j] += triangle[i - 1][j];

            }
            else if (j == triangle[i].size() - 1) {

                triangle[i][j] += triangle[i - 1][j - 1];
            }
            else
            {
                triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
            }

        }

    }

    int len = triangle.size();
    
    return *max_element(triangle[len - 1].begin(), triangle[len - 1].end());
}
