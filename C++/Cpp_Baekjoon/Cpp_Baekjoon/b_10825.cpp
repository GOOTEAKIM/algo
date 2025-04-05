#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct score
{
	string name;
	int korean;
	int english;
	int math;

	bool operator<(score right) const{

		if (korean != right.korean) {
			return korean < right.korean; // ������ ������ �ڷ� ����~
		}
	
		if (english != right.english) {
			return english > right.english; // ������ ������ ������~
		}

		if (math != right.math) {
			return math < right.math; // ������ ������ �ڷ�
		}

		return name > right.name;
	}

};

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<score> pq;

	int num;

	cin >> num;

	while (num--) {

		string name;
		int korean, english, math;

		cin >> name >> korean >> english >> math;

		pq.push({ name, korean, english, math });

	}

	while (!pq.empty()) {

		score now = pq.top();

		cout << now.name << "\n";

		pq.pop();
	}



	return 0;
}
