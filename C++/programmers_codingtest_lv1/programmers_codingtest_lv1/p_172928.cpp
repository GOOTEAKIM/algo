#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {

    int x = 0, y = 0;
    for (int i = 0; i < park.size(); i++) {
        for (int j = 0; j < park[i].length(); j++) {
            if (park[i][j] == 'S') {
                x = i;
                y = j;
                break;
            }
        }
    }

    for (string command : routes) {

        stringstream ss(command);

        char direction;

        int much;

        ss >> direction >> much;

        int nx = x, ny = y; 

        bool valid = true;

        for (int i = 0; i < much; i++) {
            if (direction == 'E') ny++;
            else if (direction == 'W') ny--;
            else if (direction == 'S') nx++;
            else if (direction == 'N') nx--;

            // 경계 확인 및 장애물 체크
            if (nx < 0 || nx >= park.size() || ny < 0 || ny >= park[0].length() || park[nx][ny] == 'X') {
                valid = false;
                break;
            }
        }

        // 유효한 경우에만 현재 위치 업데이트
        if (valid) {
            x = nx;
            y = ny;
        }
    }

    return { x, y };
}
