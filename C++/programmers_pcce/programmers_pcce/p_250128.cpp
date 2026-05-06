/*

디버깅(Debugging) 문제 안내
디버깅(Debugging)은 이미 완성된 코드에서 버그를 찾아 수정하는 문제 타입입니다.
1줄만 수정하여 버그를 고치세요.
2줄 이상 수정할 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<int> numbers, vector<int> our_score, vector<int> score_list) {
    int num_student = numbers.size();
    vector<string> answer(num_student);

    for (int i = 0; i < num_student; i++) {
        // 원본
        // if (our_score[i] == score_list[i]) {
        if (our_score[i] == score_list[numbers[i] - 1]) {
            answer[i] = "Same";
        }
        else {
            answer[i] = "Different";
        }
    }

    return answer;
}