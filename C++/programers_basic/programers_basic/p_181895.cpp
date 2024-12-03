#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

/*
iterator insert(iterator pos, InputIterator first, InputIterator last);
pos: �� ��Ҹ� ������ ��ġ�� ��Ÿ���� iterator.
first�� last : ������ ��� ������ �����ϴ� iterator.
*/

vector <int> solution(vector<int> arr, vector<vector<int>> intervals) {

	vector<int> answer;

	for (const auto& interval : intervals) {
		int start = interval[0];
		int end = interval[1];

		answer.insert(answer.end(), arr.begin() + start, arr.begin() + end + 1);
	}
	return answer;

}