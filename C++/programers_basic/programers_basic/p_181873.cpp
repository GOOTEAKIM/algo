#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string, string alp) {

	for (char& my : my_string) {
		if (my == alp[0]) {
			my = toupper(my);
		}
	}
	return my_string;
}

