#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    
    // ���ڿ��� ��ǲ
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            arr[i][j] = row[j] - '0';  // ���� �� ���ڷ� ��ȯ
        }
    }

    int max_size = min(n, m);

    // ���� ū �ͺ��� �˻�
    for (int size = max_size; size >= 1; size--) {
        for (int i = 0; i <= n - size; i++) {
            for (int j = 0; j <= m - size; j++) {
                if (arr[i][j] == arr[i][j + size - 1] &&
                    arr[i][j] == arr[i + size - 1][j] &&
                    arr[i][j] == arr[i + size - 1][j + size - 1]) {
                    cout << size * size;  
                    return 0;
                }
            }
        }
    }

    cout << 1;
    return 0;
}
