#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr);

int main() {

	return 0;
}

string solution(vector<string> arr) {

	string result;

	for (int i = 0; i < arr.size(); i++) {

		result += arr[i];
	}

	return result;
}