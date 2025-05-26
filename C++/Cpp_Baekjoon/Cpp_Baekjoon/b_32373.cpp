#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, k;
    
    cin >> n >> k;

    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < arr.size(); i++) {
        if (i % k != arr[i] % k) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
   
    return 0;
}

