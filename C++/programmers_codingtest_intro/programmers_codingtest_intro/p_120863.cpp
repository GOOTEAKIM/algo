#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    int x_coeff = 0;  
    int constant = 0; 

    stringstream ss(polynomial);
    string term;

    while (ss >> term) { 
        if (term == "+") continue; 

        if (term.find('x') != string::npos) { 
            if (term == "x") {
                x_coeff += 1; 
            }
            else {
                x_coeff += stoi(term.substr(0, term.find('x')));
            }
        }
        else {
            constant += stoi(term);
        }
    }

    string result;

    if (x_coeff > 0) {
        if (x_coeff == 1) {
            result += "x"; 
        }
        else {
            result += to_string(x_coeff) + "x";
        }
    }

    if (constant > 0) {
        if (!result.empty()) result += " + ";
        result += to_string(constant);
    }

    return result;
}