#include <iostream>
#include <string>

using namespace std;

// to_string = string x -> string으로 변환
// stoi : 정수형으로 반환

int solution(int a, int b);

int main() {
	
	int a, b;

	cin >> a >> b;

	int result = solution(a, b);

	cout << result << endl;

	return 0;
}

int solution(int a, int b) {

	string ab = to_string(a) + to_string(b);
	string ba = to_string(b) + to_string(a);

	if (ab >= ba) {
		return stoi(ab);
	}
	else
	{
   		return stoi(ba);
	}

}