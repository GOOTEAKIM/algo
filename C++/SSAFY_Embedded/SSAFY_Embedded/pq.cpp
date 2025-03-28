#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


struct SoccerPlayer
{
	string name;
	int ability;
	int number;

	bool operator<(SoccerPlayer right) const {

		// 1. �ɷ�ġ�� ��������
		if (ability < right.ability) return true; // �켱���� ť�� ���������� ����Ʈ�ϱ�
		if (ability > right.ability) return false;
		// 2. ��ȣ�� ��������
		if (number < right.number) return true;
		if (number > right.number) return false;

		// 3. �̸��� ������
		if (name > right.name) return true;
		if (name < right.name) return false;

		return false;
	}

};

// functio object

int main() {
	/*
	priority_queue<int, vector<int>> pq; // ����Ʈ ���� �������� ����
	//priority_queue<int, vector<int>, greater<int>> pq; 

	pq.push(3);
	pq.push(10);
	pq.push(1);
	pq.push(55);
	pq.push(32);
	pq.push(190);
	pq.push(8);
	pq.push(4);
	
	while (!pq.empty()) {

		cout << pq.top() << "\n";

		pq.pop();

	}

	*/
	priority_queue<SoccerPlayer> pq;

	pq.push({ "�����", 93,7 });
	pq.push({ "�̰���", 90,18 });
	pq.push({ "�̱���", 70,13 });
	pq.push({ "�����", 93,9 });
	pq.push({ "������", 98,0 });

	while (!pq.empty()) {

		SoccerPlayer now = pq.top();

		cout << now.name << " | " << now.ability << " | " << now.number << "\n";
		pq.pop();

	}

	return 0;
}