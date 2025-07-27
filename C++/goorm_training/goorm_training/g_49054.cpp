#include <iostream>
#include <vector>

using namespace std;

void multiply(vector<int>& digits, int num) {

    int carry = 0;

    for (int i = 0; i < digits.size(); i++) {

        int product = digits[i] * num + carry;
        digits[i] = product % 10;
        carry = product / 10;

    }

    while (carry > 0) {

        digits.push_back(carry % 10);
        carry /= 10;

    }
}

int digitalRoot(const vector<int>& digits) {

    int sum = 0;

    for (int d : digits) {
        sum += d;
    }

    while (sum >= 10) {
        
        int temp = 0;

        while (sum > 0) {
            temp += sum % 10;
            sum /= 10;
        }
        
        sum = temp;
    
    }

    return sum;
}

int main() {

    int n;

    cin >> n;

    vector<int> digits = { 1 };  // 0번째 자릿수부터 저장 (1의 자리부터)

    for (int i = 2; i <= n; i++) {

        multiply(digits, i);

    }

    cout << digitalRoot(digits);

    return 0;
}
