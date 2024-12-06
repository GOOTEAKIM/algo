#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int money) {

	vector<int> answer;

	int jan = money / 5500;
	answer.push_back(jan);
	answer.push_back(money % 5500);

	return answer;

}