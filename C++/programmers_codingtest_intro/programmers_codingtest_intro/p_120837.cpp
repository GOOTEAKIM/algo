#include <iostream>
#include <vector>

using namespace std;

int solution(int hp) {

	int answer = 0;

	//while (hp > 0) {

	//	if (hp >= 5) {

	//		answer += hp / 5;
	//		hp %= 5;
	//	}
	//	else if (hp < 5 && hp >= 3) {

	//		answer += hp / 3;
	//		hp %= 3;

	//	}
	//	else if (hp <3 && hp >0)
	//	{

	//		answer += hp;
	//		hp = 0; // ���� ����!!!!
	//	}

	//}

	answer += hp / 5;
	hp %= 5;

	answer += hp / 3;
	hp %= 3;

	answer += hp;

	return answer;
}