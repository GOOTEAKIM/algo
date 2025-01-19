/*

방향배열

현재 좌표 기준으로 탐색ㅎ는 방향들의 offset을 저장하는 배열

불필요한 if문 사용을 줄일 수 있다.

유지보수가 쉽다
간결하게 사용 가능

완전탐색 / 맵에 사용


*/


#include <iostream>
#include <vector>

using namespace std;

int main() {

	int MAP[][3] = {
		{1,2,3},
		{4,5,6},
		{7,7,7}
	};

	int y, x;
	int sum = 0;
	cin >> y >> x;


	int ydir[4] = { -1,1,0,0 };
	int xdir[4] = { 0,0,-1,1 };

	for (int i = 0; i < 4; i++) {

		int ny = y + ydir[i];
		int nx = x + xdir[i];

		if (ny >= 3 || ny < 0 || nx >= 3 || nx < 0) {
			continue;
		}
		sum += MAP[ny][nx];

	}

	cout << sum << endl;

	return 0;
}

