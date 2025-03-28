#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 구조체로 구현

struct Coord
{
	int row;
	int col;

};

// 1. cmp 만들어서 사용
bool cmp_Coord(Coord left, Coord right) {

	// 1. row 큰값부터 작은값으로 내림차순

	if (left.row > right.row) return true;
	if (left.row < right.row) return false;

	// 2. col 은 오름차순 정렬
	if (left.col < right.col) return true;
	if (left.col > right.col) return false;


	return false; // 같은 경우는 false	
}

int main() {

	Coord cords[5] = {
		{1,2},
		{2,3},
		{2,4},
		{4,3},
		{4,5}
	};

	//sort(cords, cords + 5);
	sort(cords, cords + 5, cmp_Coord);

	return 0;
}