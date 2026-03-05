#include <iostream>

using namespace std;

int main() {

    int n, m, t;

    cin >> n >> m >> t;

    int bestBurger = 0;

    int bestCoke = t;

    for (int i = 0; i <= t / n; i++) {

        int rest = t - i * n;

        int burgerM = rest / m;

        int coke = rest % m;

        int total = i + burgerM;

        if (coke < bestCoke) {

            bestCoke = coke;
            bestBurger = total;

        }
        else if (coke == bestCoke && total > bestBurger) {

            bestBurger = total;

        }
    }

    cout << bestBurger << " " << bestCoke;

}