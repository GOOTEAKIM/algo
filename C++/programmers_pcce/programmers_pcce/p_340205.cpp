/*

디버깅(Debugging) 문제 안내
디버깅(Debugging)은 이미 완성된 코드에서 버그를 찾아 수정하는 문제 타입입니다.
1줄만 수정하여 버그를 고치세요.
2줄 이상 수정할 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <iostream>

using namespace std;

int main(void) {
    int number;
    cin >> number;

    int answer = 0;

    // 원본
    // for(int i=0; i<1; i++) {
    while (number > 0) {
        answer += number % 100;
        number /= 100;
    }
    cout << answer << endl;
    return 0;
}