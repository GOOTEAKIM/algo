/*

디버깅(Debugging) 문제 안내
디버깅(Debugging)은 이미 완성된 코드에서 버그를 찾아 수정하는 문제 타입입니다.
1줄만 수정하여 버그를 고치세요.
2줄 이상 수정할 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <string>
#include <vector>

using namespace std;

string solution(string nickname) {
    string answer = "";
    for (int i = 0; i < nickname.size(); i++) {
        if (nickname[i] == 'l') {
            answer += "I";
        }
        else if (nickname[i] == 'w') {
            answer += "vv";
        }
        else if (nickname[i] == 'W') {
            answer += "VV";
        }
        else if (nickname[i] == 'O') {
            answer += "0";
        }
        else {
            answer += nickname[i];
        }
    }

    // 원본
    // if (answer.size() < 3) {
    while (answer.size() < 4) {
        answer += "o";
    }
    if (answer.size() > 8) {
        answer = answer.substr(0, 8);
    }
    return answer;
}