/*

디버깅(Debugging) 문제 안내
디버깅(Debugging)은 이미 완성된 코드에서 버그를 찾아 수정하는 문제 타입입니다.
1줄만 수정하여 버그를 고치세요.
2줄 이상 수정할 경우, 실행 결과에 에러 메시지가 표시됩니다.

*/

#include <iostream>

using namespace std;

int main(void) {
    int a;
    int c;
    cin >> a >> c;

    
    // int b_square = c - a; 
    
    // >>

    int b_square = c * c - a * a;
    cout << b_square << endl;
    return 0;
}