#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> alis;

int solution(int m, int n, vector<vector<int>> puddles) {

    alis.assign(n, vector<int>(m, 0));

    alis[0][0] = 1;

    for (auto next : puddles) {

        int x = next[0];
        int y = next[1];

        alis[y - 1][x - 1] = -1;

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (alis[i][j] == -1) {

                alis[i][j] = 0;

                continue;
            }

            if (i - 1 >= 0) alis[i][j] += alis[i - 1][j];

            if (j - 1 >= 0) alis[i][j] += alis[i][j - 1];

            alis[i][j] %= 1000000007;
        }
    }

    return alis[n - 1][m - 1];
}

// 1 1 1 1
// 1 x 1 2
// 1 1 2 4