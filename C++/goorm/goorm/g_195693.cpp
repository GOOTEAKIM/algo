#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int bigger = max(a, b);
    int smaller = min(a, b);

    int min_count = -1; // ���� ������ ���� ����

    for (int i = n / bigger; i >= 0; i--) {

        int rest = n - i * bigger;

        if (rest % smaller == 0) {

            int count = i + (rest / smaller);

            if (min_count == -1) {
                // ù ��° ������ �����̸� ������ ����
                min_count = count;

            }
            else if (count < min_count) {
                // �̹� ���� ������ �� ���� ��츸 ����
                min_count = count;
            }
        }
    }

    cout << min_count;
    return 0;
}
