#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool found = false;

    for (int i = 2; i <= 9; i++) { 
        for (int j = 1; j <= 9; j++) { 
            if (i == n || j == n || (i * j) == n) { 
                found = true;
                break; 
            }
        }
        if (found) break;
    }

    cout << (found ? 1 : 0) << endl; 
    return 0;
}
