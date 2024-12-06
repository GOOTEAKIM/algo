#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {

	for (char& my : myString) {
		if (my == 'a') {
			my = 'A';
		}
		else if (isupper(my) && my != 'A')
		{
			my = tolower(my);
		}
	}
	return myString;

}