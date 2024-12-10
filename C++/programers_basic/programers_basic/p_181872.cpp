#include <iostream>
#include <string>

using namespace std;

string solution(string myString, string pat);

int main() {

	string myString, pat;

	cin >> myString >> pat;

	cout << solution(myString, pat) << endl;

	return 0;
}

string solution(string myString, string pat) {

	int pos = myString.rfind(pat);

	cout << pos << endl;
	cout << pat.size() << endl;

	string answer = myString.substr(0, pos + pat.size());
	
	return answer;

}