#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {

    map<string, char> morseCode = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'},
        {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'},
        {"-.-", 'k'}, {".-..", 'l'}, {"--", 'm'}, {"-.", 'n'}, {"---", 'o'},
        {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'},
        {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'}, {"-.--", 'y'},
        {"--..", 'z'}
    };

    stringstream ss(letter);
    string morseChar, result = "";

    while (ss >> morseChar) {

        if (morseCode.find(morseChar) != morseCode.end()) {
            result += morseCode[morseChar];
        }
    }

    return result;
}