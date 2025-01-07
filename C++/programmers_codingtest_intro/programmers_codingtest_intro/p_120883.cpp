#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {

	string real_id = id_pw[0];
	string real_pw = id_pw[1];

	for (auto user : db) {
		if (user[0] == real_id) {
			if (user[1] == real_pw) {
				return "login";
			}
			else
			{
				return "wrong pw";
			}
		}
	}

	return "fail";
}