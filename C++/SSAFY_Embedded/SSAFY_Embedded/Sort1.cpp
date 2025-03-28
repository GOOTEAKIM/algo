#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// 개수 하나씩 비교
bool cmp(int left, int right) {

	if (left < right) return true;
	if (left > right) return false;
	return false;
}

int main() {

	int arr[10] = { 3,22,28,17,24557,12,4,30,21,55 };

	sort(arr, arr + 10);
	//sort(arr, arr + 10, cmp);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	vector<int> v;

	v.push_back(3);
	v.push_back(24);
	v.push_back(12);
	v.push_back(497);
	v.push_back(19);
	v.push_back(5);

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}



	return 0;
}