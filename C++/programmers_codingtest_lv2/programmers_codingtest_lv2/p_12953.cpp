#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b) {

    return (a / gcd(a, b)) * b;

}

int solution(vector<int> arr) {
    
    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        ans = lcm(ans, arr[i]);
    }

    return ans;
}

