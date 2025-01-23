#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int d, int k) {

    vector<int> fib(d + 1);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= d; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int A = 1; A <= k; A++) {
        for (int B = A; B <= k; B++) {
            int total = A * fib[d - 2] + B * fib[d - 1];
            if (total == k) {
                return { A, B };
            }
            else if (total > k) {
                break;
            }
        }
    }
}

int main() {
    int D, K;
    cin >> D >> K;

    vector<int> result = solution(D, K);
    cout << result[0] << endl;
    cout << result[1] << endl;

    return 0;
}
