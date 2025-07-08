#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long eval(const string &expr) { // 계산 값이 커질 수도 있으니까 long long으로 받는다
     
    vector<long long> nums; // 숫자
    vector<char> ops; // 연산자

    int i = 0;
    int n = expr.size();

    while (i < n) {

        if (isdigit(expr[i])) { // 슷자일 경우
            long long num = 0;
            while (i < n && isdigit(expr[i])) { // 숫자일 경우만 구함
                num = num * 10 + (expr[i] - '0');
                i++;
            }

            if (!ops.empty() && ops.back() == '*') { //  
                nums.back() *= num;
                ops.pop_back();
            } else {
                nums.push_back(num);
            }

        } else { // 연산자 일 때
            ops.push_back(expr[i]);
            i++;
        }
    }

    // 이제 남은 것은 +, - 만 있음
    long long res = nums[0];
    int idx = 1;
    for (char op : ops) {
        if (op == '+') {
            res += nums[idx];
        } else if (op == '-') {
            res -= nums[idx];
        }
        idx++;
    }

    return res;
}

int main() {

    string a, b;

    cin >> a >> b;

    long long ansA = eval(a);
    long long ansB = eval(b);

    cout << max(ansA, ansB) << '\n';

    return 0;
}

