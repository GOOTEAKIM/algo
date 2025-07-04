#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int num = *max_element(arr.begin(), arr.end()); // arr���� ���� ū ���� �������� ���Ѵ�

	int now = arr[0];

	int total = now;

	for (int i = 1; i < n; i++) {

		int next = arr[i];

		if (next - now == 1) { // ���� ���ڿ� 1 ���̳��ٸ�?
			total += next; // ���� ����
			now = next; // ���� ���� ����

			if (total > num) {
				num = total; // �ְ� ���� ����
			}
		}

		else { // ���� ���ں��� 1�Ѱ� ���� ���ٸ�?
			total = next;
			now = next;
		}

	}

	cout << num;

	return 0;
}