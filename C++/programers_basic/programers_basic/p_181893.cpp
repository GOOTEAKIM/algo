#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	return 0;
}

vector<int> solution(vector<int> arr, vector<int> query) {
    for (int i = 0; i < query.size(); i++) {
        if (i % 2 == 0) {
            arr = vector<int>(arr.begin(), arr.begin() + query[i] + 1);
        }
        else {
            arr = vector<int>(arr.begin() + query[i], arr.end());
        }
    }
    return arr;
}