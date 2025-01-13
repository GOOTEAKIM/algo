#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(int a, int b) {

	int total = 0;

	if (a ==1) {
		total += b;
	}
	else if (a == 2) {
		total += (31 + b);
	}
	else if (a == 3) {
		total += (60 + b); 
	}
	else if (a == 4) {
		total += (91 + b);
	}
	else if (a == 5) {
		total += (121 + b);
	}
	else if (a == 6) {
		total += (152 + b);
	}
	else if (a == 7) {
		total += (182 + b);
	}
	else if (a == 8) {
		total += (213 + b);
	}
	else if (a == 9) {
		total += (244 + b);
	}
	else if (a == 10) {
		total += (274 + b);
	}
	else if (a == 11) {
		total += (305 + b);
	}
	else if (a == 12) {
		total += (335 + b);
	}

	if (total % 7 == 1) {
		return "FRI";
	}
	else if (total % 7 == 2) {
		return "SAT";
	}
	else if (total % 7 == 3) {
		return "SUN";
	}
	else if (total % 7 == 4) {
		return "MON";
	}
	else if (total % 7 == 5) {
		return "TUE";
	}
	else if (total % 7 == 6) {
		return "WED";
	}
	else
	{
		return "THU";
	}

}

		