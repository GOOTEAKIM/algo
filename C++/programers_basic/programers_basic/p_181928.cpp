#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {


	return 0;
}

int solution(vector<int> num_list) {

	string odd;
	string nodd;

	for (int i = 0; i < num_list.size(); i++) {
		if (num_list[i] % 2 == 1) {
			odd += to_string(num_list[i]);
		}
		else
		{
			nodd += to_string(num_list[i]);
		}
	}

	return stoi(odd) + stoi(nodd);

}