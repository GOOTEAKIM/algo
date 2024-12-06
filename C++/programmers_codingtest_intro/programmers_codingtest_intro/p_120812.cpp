#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {

	int answer = 0;

	unordered_map<int, int> freq;


	// dict 같은 것에 정보 저장
	for (int num : array) {
		freq[num]++;
	}

	int maxFreq = 0;


	for (auto& entry : freq) {
		maxFreq = max(maxFreq, entry.second);
	}

	int countOfMax = 0;
	int mode = -1;

	for (auto& entry : freq) {
		if (entry.second == maxFreq) {
			countOfMax++;
			mode = entry.first;
		}
	}
	
	// 1보다 countOfMax 가 크다면 -1, 아니면 mode를 return
	return countOfMax > 1 ? -1 : mode;
}