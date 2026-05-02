/*

빈칸 채우기 문제 안내
빈칸 채우기는 이미 완성된 코드 중 빈칸에 알맞은 코드를 입력하는 문제 타입입니다.
빈칸을 제외한 기본 코드는 수정할 수 없습니다.
빈칸을 채우지 않을 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <iostream>

using namespace std;

int main(void) {
	string code;
	cin >> code;
	string last_four_words = code.substr(code.size() - 4, 4);

	//if (last_four_words == 빈칸) {
	if (last_four_words == "_eye") {
		cout << "Ophthalmologyc";
	}

	//else if (빈칸) {
	else if (last_four_words == "head") {
		cout << "Neurosurgery";
	}

	//else if (빈칸) {
	else if (last_four_words == "infl") {
		cout << "Orthopedics";
	}

	// 빈칸 {
	else if (last_four_words == "skin") {
		cout << "Dermatology";
	}

	// 빈칸
	else
	{
		cout << "direct recommendation";
	}
	return 0;
}