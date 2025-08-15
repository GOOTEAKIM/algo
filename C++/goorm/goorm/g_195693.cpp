#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int bigger = max(a, b);
    int smaller = min(a, b);

    int min_count = -1; // 아직 가능한 조합 없음

    for (int i = n / bigger; i >= 0; i--) {

        int rest = n - i * bigger;

        if (rest % smaller == 0) {

            int count = i + (rest / smaller);

            if (min_count == -1) {
                // 첫 번째 가능한 조합이면 무조건 저장
                min_count = count;

            }
            else if (count < min_count) {
                // 이미 값이 있으면 더 작은 경우만 갱신
                min_count = count;
            }
        }
    }

    cout << min_count;
    return 0;
}
