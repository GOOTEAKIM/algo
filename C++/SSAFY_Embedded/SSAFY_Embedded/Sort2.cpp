#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ����ü�� ����

struct Coord
{
	int row;
	int col;

};

// 1. cmp ���� ���
bool cmp_Coord(Coord left, Coord right) {

	// 1. row ū������ ���������� ��������

	if (left.row > right.row) return true;
	if (left.row < right.row) return false;

	// 2. col �� �������� ����
	if (left.col < right.col) return true;
	if (left.col > right.col) return false;


	return false; // ���� ���� false	
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