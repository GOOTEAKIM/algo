#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int x1, y1;

	cin >> x1 >> y1;

	int x2, y2;

	cin >> x2 >> y2;

	int x3, y3;

	cin >> x3 >> y3;

    int cross_product = (x2 - x1) * (y3 - y2) - (y2 - y1) * (x3 - x2);

    if (cross_product > 0) {
        cout << 1 << endl; 
    }
    else if (cross_product < 0) {
        cout << -1 << endl; 
    }
    else {
        cout << 0 << endl;  
    }

	return 0;
}

