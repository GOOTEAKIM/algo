/*

빈칸 채우기는 이미 완성된 코드 중 빈칸에 알맞은 코드를 입력하는 문제 타입입니다.
빈칸을 제외한 기본 코드는 수정할 수 없습니다.
빈칸을 채우지 않을 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

/*

출력 예시
Spring is beginning
13
310

*/

#include <iostream>

using namespace std;

int main(void) {

    //string msg = 빈칸 ;
    string msg ="Spring is beginning";

    //int val1 = 빈칸 ;
    int val1 = 3;

    //string val2 = 빈칸 ;
    string val2 = "3";

    cout << msg << endl;
    cout << val1 + 10 << endl;
    cout << val2 + "10" << endl;

    return 0;
}