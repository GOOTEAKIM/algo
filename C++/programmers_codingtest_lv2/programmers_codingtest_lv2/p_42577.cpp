#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool solution(vector<string> phone_book) {

    sort(phone_book.begin(), phone_book.end());

    for (size_t i = 0; i < phone_book.size() - 1; i++) {
        if (phone_book[i + 1].find(phone_book[i]) == 0) {
            return false;
        }
    }

    return true;
}