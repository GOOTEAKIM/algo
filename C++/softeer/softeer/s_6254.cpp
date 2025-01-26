#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int solution(string time) {

	stringstream ss(time);

	string dep_hour = time.substr(0,2);
	string dep_min = time.substr(3, 2);
	
	int dh = stoi(dep_hour);
	int dm = stoi(dep_min);

	int total = dh * 60 + dm;

	return total;
}

int main() {

	int ans = 0;

	for (int i = 0; i < 5; i++) {

		string depart, land;
		
		cin >> depart >> land;

		int depart_time, land_time;

		depart_time = solution(depart);
		land_time = solution(land);

		ans += (land_time - depart_time);

	}

	cout << ans << endl;

	return 0;
}