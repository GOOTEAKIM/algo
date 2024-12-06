#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {

	//vector<int> answer;

	//int hol = 0, jjak = 0;

	//for (auto& num :  num_list) {
	//	if (num % 2 == 0) {
	//		jjak++;
	//	}
	//	else
	//	{
	//		hol++;
	//	}
	//}

	//answer.push_back(jjak);
	//answer.push_back(hol);

	//return answer;
	
	vector<int> answer(2, 0);

	for (int num : num_list) {
		answer[num % 2]++;
	}
	return answer;

}