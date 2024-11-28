#include <iostream>

using namespace std;

int solution(int a, int b, int c);

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	int result = solution(a, b, c);

	cout << result << endl;

	return 0;
}

int solution(int a, int b, int c) {


	if (a != b && a != c && b != c) {
		return (a + b + c);
	} 
	if (a == b && b != c) {
		return ((a + b + c) * (a * a + b * b + c * c));
	}
	if (a == c && b != c) {
		return ((a + b + c) * (a * a + b * b + c * c));
	}	
	if (b == c && a != c) {
		return ((a + b + c) * (a * a + b * b + c * c));
	}

	if (a == b && b == c) {
		return ((a + b + c) * (a * a + b * b + c * c) * (a * a * a + b * b * b + c * c * c));
	}

}