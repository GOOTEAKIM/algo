#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

string solution(int age) {

	string result = "";

	while (age > 0) {
		int digit = age % 10;
		result = char('a' + digit) + result;
		age /= 10;
	}
	
	return result;
}