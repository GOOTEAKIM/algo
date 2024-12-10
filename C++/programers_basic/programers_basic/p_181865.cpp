#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int solution(string binomial) {

	stringstream ss(binomial);

	string a, op, b;

	ss >> a >> op >> b;

	int num1 = stoi(a);
	int num2 = stoi(b);

	if (op == "+") {
		return num1 + num2;
	}
	else if (op =="-")
	{
		return num1 - num2;
	}
	else {
		return num1 * num2;
	}

}