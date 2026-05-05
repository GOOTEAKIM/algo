/*

빈칸 채우기 문제 안내
빈칸 채우기는 이미 완성된 코드 중 빈칸에 알맞은 코드를 입력하는 문제 타입입니다.
빈칸을 제외한 기본 코드는 수정할 수 없습니다.
빈칸을 채우지 않을 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> cpr) {
    vector<int> answer = { 0, 0, 0, 0, 0 };
    vector<string> basic_order = { "check", "call", "pressure", "respiration", "repeat" };

    //for (int i = 0; i < 빈칸 ; i++) {
    for (int i = 0; i < cpr.size(); i++) {
        //for (int j = 0; j < 빈칸 ; j++) {
        for (int j = 0; j < basic_order.size(); j++) {
            
            if (cpr[i] == basic_order[j]) {
                
                //answer[i] = 빈칸 ;
                answer[i] = j + 1;

                break;
            }
        }
    }

    return answer;
}