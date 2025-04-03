#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {

    int left = 0, right = 0, sum = 0;

    int min_length = INT_MAX;

    vector<int> ans;

    while (right < sequence.size()) {

        sum += sequence[right];

        while (sum > k && left <= right) {

            sum -= sequence[left];

            left++;
        }

        if (sum == k) {

            if (right - left < min_length) {

                min_length = right - left;

                ans = { left,right };
            }
        }
        right++;

    }

    return ans;
}

