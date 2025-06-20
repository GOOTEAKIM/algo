#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int n;

	cin >> n;

	vector<pair<long long,long long>> arr(n);

	for(int i = 0; i <n; i++) {

		long long start, finish;

		cin >> start >> finish;
		
		arr[i] = {finish,start};
	}

	sort(arr.begin(), arr.end());
	
	int ans = 0;

	long long last_finish = 0;
	
	for(int i = 0; i<n;i++) {

		if(arr[i].second > last_finish) {
			last_finish = arr[i].first;
			ans++;
		}
		
	}
	
	cout << ans;
	
	return 0;
}
	