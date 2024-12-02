#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

string solution(string my_string, vector<int> indices) {
	
	sort(indices.rbegin(), indices.rend());

	for (int idx : indices) {

		my_string.erase(my_string.begin() + idx);

	}

	return my_string;

}