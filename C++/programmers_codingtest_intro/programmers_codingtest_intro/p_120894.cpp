#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {

	unordered_map<string, char> num_map = {

        {"zero", '0'},
        {"one", '1'},
        {"two", '2'},
        {"three", '3'},
        {"four", '4'},
        {"five", '5'},
        {"six", '6'},
        {"seven", '7'},
        {"eight", '8'},
        {"nine", '9'}

	};

    string result = "";
    string temp = "";

    for (char ch : numbers) {

        temp += ch;

        if (num_map.find(temp) != num_map.end()) {

            result += num_map[temp];
            temp = "";
        }
    }

    return stoll(result);

}