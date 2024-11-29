#include <iostream>
#include <string>

using namespace std;

int solution(int n, string control);

int main() {

	int n;
	string control;
	cin >> n;
	cin >> control;

	cout << solution(n, control) << endl;

	return 0;
}

int solution(int n, string control) {

	for (int i = 0; i < control.length(); i++) {
		if (control[i] == 'w') {
			n += 1;
		}
		else if (control[i] == 's')
		{
			n -= 1;
		}
		else if (control[i] == 'd') {
			n += 10;
		}
		else
		{
			n -= 10;
		}
	}

	return n;
}
