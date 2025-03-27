#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {

    int ans = 0;

    vector<char> arr;

    for (auto spell : skill) {
        arr.push_back(spell);
    }

    for (string word : skill_trees) {

        int cnt = 0;

        bool flag = true; // ��ų�� ��� ���� �۵� ���� �ϴ�

        for (char spell : word) {

            if (find(arr.begin(), arr.end(), spell) != arr.end()) { // ��ų�� �ִ� ������ ���

                if (spell == arr[cnt]) {
  
                    cnt++;
                }
                else
                {
                    flag = false;
                    break;
                }

            }

        }
        if (flag) ans++;
    }

    return ans;
}