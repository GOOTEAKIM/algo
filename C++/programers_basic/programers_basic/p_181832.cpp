#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(int n) {
    // n x n 배열 초기화
    vector<vector<int>> answer(n, vector<int>(n, 0));

    // 방향 이동 (우, 하, 좌, 상)
    vector<int> dx = { 0, 1, 0, -1 };
    vector<int> dy = { 1, 0, -1, 0 };

    int x = 0, y = 0; 
    int dir = 0;     
    int num = 1;      

    // 1부터 n^2까지 채우기
    for (int i = 0; i < n * n; i++) {
        answer[x][y] = num++;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n || answer[nx][ny] != 0) {
            dir = (dir + 1) % 4; // 방향 변경
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    return answer;
}