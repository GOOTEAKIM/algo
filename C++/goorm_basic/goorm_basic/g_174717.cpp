#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long eval(const string &expr) { // ��� ���� Ŀ�� ���� �����ϱ� long long���� �޴´�
     
    vector<long long> nums; // ����
    vector<char> ops; // ������

    int i = 0;
    int n = expr.size();

    while (i < n) {

        if (isdigit(expr[i])) { // ������ ���
            long long num = 0;
            while (i < n && isdigit(expr[i])) { // ������ ��츸 ����
                num = num * 10 + (expr[i] - '0');
                i++;
            }

            if (!ops.empty() && ops.back() == '*') { //  
                nums.back() *= num;
                ops.pop_back();
            } else {
                nums.push_back(num);
            }

        } else { // ������ �� ��
            ops.push_back(expr[i]);
            i++;
        }
    }

    // ���� ���� ���� +, - �� ����
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

