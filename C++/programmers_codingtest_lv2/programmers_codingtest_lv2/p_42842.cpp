#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {

    int area = brown + yellow;

    for (int height = 3; height <= area / height; height++) {

        if (area % height == 0) {
            int width = area / height;

            if ((width - 2) * (height - 2) == yellow) {
                return { width, height };
            }
        }

    }

}
