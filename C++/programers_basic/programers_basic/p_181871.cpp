#include <iostream>
#include <string>

using namespace std;

int solution(string myString, string pat) {

	int answer = 0;

	for (int i = 0; i <= myString.length() - pat.length() + 1; i++) {

		if (myString.substr(i, pat.length()) == pat) {
			answer++;
		}

	}

	return answer;
}