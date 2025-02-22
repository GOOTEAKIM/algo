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

	sort(users.begin(), users.end()); // ���� �ð� ������ ����

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	priority_queue<int, vector<int>, greater<int>> available_seat;

	vector<int> seat_cnt; // �� �� �ڸ��� �󸶳� ���� ����� �ɾҳ� ����

	int seat_num = 0;

	for (auto user : users) {
		
		int start = user.first; // ���� �ð�

		int finish = user.second;	// ���� �ð�

		while (!pq.empty() && start > pq.top().first) {

			int free_seat = pq.top().second;

			pq.pop();

			available_seat.push(free_seat);
		}

		int assigned_seat = 0;

		if (!available_seat.empty()) { // ������ �ڸ��� �ִٸ�

			assigned_seat = available_seat.top();

			available_seat.pop();

			seat_cnt[assigned_seat]++;
		}
		else // ������ �ڸ��� ���ٸ�?
		{
			assigned_seat = seat_num++; // �¼� ��ȣ�� �Ҵ�
			seat_cnt.push_back(1); // ī��Ʈ vector �� 1�� �߰�
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