#include <iostream>

using namespace std;

int main() {

	return 0;
}

bool solution(bool x1, bool x2, bool x3, bool x4) {

	bool flag1 = true;
	bool flag2 = true;

	if (x1 == true || x2 == true) {
		flag1 = true;
	}
	else
	{
		flag1 = false;
	}

	if (x3 == true || x4 == true) {
		flag2 = true;
	}
	else
	{
		flag2 = false;
	}

	if (flag1 == true && flag2 == true) {
		return true;
	}
	else
	{
		return false;
	}

}

// ¸®ÆÑÅä¸µ ÈÄ
bool solution_final(bool x1, bool x2, bool x3, bool x4) {
	return (x1 || x2) && (x3 || x4);
}
