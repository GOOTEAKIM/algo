#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int>  num_list, int n) {

	vector<int> answer;

	answer.assign(num_list.begin(), num_list.begin() + n);

	return answer;

}