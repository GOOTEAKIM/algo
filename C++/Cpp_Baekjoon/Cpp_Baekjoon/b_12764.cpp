#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> users(n);

	for (int i = 0; i < n; i++) {
		cin >> users[i].first >> users[i].second;
	}

	sort(users.begin(), users.end()); // 시작 시간 순으로 정렬

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	priority_queue<int, vector<int>, greater<int>> available_seat;

	vector<int> seat_cnt; // 몇 번 자리에 얼마나 많은 사람이 앉았나 저장

	int seat_num = 0;

	for (auto user : users) {
		
		int start = user.first; // 시작 시간

		int finish = user.second;	// 종료 시간

		while (!pq.empty() && start > pq.top().first) {

			int free_seat = pq.top().second;

			pq.pop();

			available_seat.push(free_seat);
		}

		int assigned_seat = 0;

		if (!available_seat.empty()) { // 가능한 자리가 있다면

			assigned_seat = available_seat.top();

			available_seat.pop();

			seat_cnt[assigned_seat]++;
		}
		else // 가능한 자리가 없다면?
		{
			assigned_seat = seat_num++; // 좌석 번호를 할당
			seat_cnt.push_back(1); // 카운트 vector 에 1을 추가
		}

		pq.push({ finish, assigned_seat });

	}

	cout << seat_num << "\n";

	for (int i = 0; i < seat_num; i++) {

		cout << seat_cnt[i];
		if (i != seat_num - 1) {
			cout << " ";
		}
	}
	
	return 0;
}