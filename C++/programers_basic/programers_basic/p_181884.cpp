#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

int solution(vector<int> numbers, int n) {

	int answer = 0;

	for (int i = 0; i < numbers.size(); i++) {

		answer += numbers[i];

		if (answer > n) {
			break;
		}

	}
	return answer;

}