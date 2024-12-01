#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int a, int b, int c);

int main() {

	int a, b, c;

	cin >> a >> b >> c;

    vector<int> result = solution(a, b, c);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

	return 0;
}

vector<int> solution(int a, int b, int c) {

	vector<int> arr = { a,b,c };

	sort(arr.begin(), arr.end());

	return arr;

}