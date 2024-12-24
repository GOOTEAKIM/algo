#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<int> box, int n) {

	int garo = box[0];
	int sero = box[1];
	int nop = box[2];

	garo /= n;
	sero /= n;
	nop /= n;

	return garo * sero * nop;

}