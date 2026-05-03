/*

빈칸 채우기 문제 안내
빈칸 채우기는 이미 완성된 코드 중 빈칸에 알맞은 코드를 입력하는 문제 타입입니다.
빈칸을 제외한 기본 코드는 수정할 수 없습니다.
빈칸을 채우지 않을 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <string>
#include <vector>

using namespace std;

int func1(int humidity, int val_set) {

	if (humidity < val_set)
		//return 빈칸;
		return 3;

	return 1;
}

int func2(int humidity) {

	if (humidity >= 50)
		return 0;
	else if (humidity >= 40)
		return 1;
	else if (humidity >= 30)
		return 2;
	else if (humidity >= 20)
		return 3;
	else if (humidity >= 10)
		return 4;

	// 빈칸
	else

		// 빈칸
		return 5;

}

int func3(int humidity, int val_set) {

	if (humidity < val_set)
		return 1;

	//return 빈칸;
	return 0;
}

int solution(string mode_type, int humidity, int val_set) {
	int answer = 0;
	
	if (mode_type == "auto") {
		
		//answer = func 빈칸;
		answer = func2 (humidity);

	}
	else if (mode_type == "target") {
		
		//answer = func 빈칸;
		answer = func1 (humidity, val_set);

	}
	else if (mode_type == "minimum") {
		
		//answer = func 빈칸;
		answer = func3 (humidity, val_set);

	}
	return answer;
}