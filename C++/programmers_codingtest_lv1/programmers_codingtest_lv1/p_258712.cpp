#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

// 문자열을 초 단위로 변환
int toSeconds(const string& time) {

	stringstream ss(time);

	int minutes, seconds;
	char colon;

	ss >> minutes >> colon >> seconds;

	return minutes * 60 + seconds;

}

// 초를 문자열로 변환
string toTimeString(int totalSeconds) {

	int minutes = totalSeconds / 60;
	int seconds = totalSeconds % 60;

	stringstream ss;

	ss << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds;

	return ss.str();
}

// 오프닝 체크 함수

int checkOpening(int position, int openingStart, int openingEnd) {

	if (openingStart <= position && position <= openingEnd) {
		return openingEnd;
	}
	return position;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
	
	int videoLength = toSeconds(video_len);
	int currentPosition = toSeconds(pos);
	int openingStart = toSeconds(op_start);
	int openingEnd = toSeconds(op_end);

	for (const string& command : commands) {

		currentPosition = checkOpening(currentPosition, openingStart, openingEnd);

		if (command == "next") {

			currentPosition = min(currentPosition + 10, videoLength);

		}
		else if (command == "prev") {
			currentPosition = max(currentPosition - 10, 0);
		}

		currentPosition = checkOpening(currentPosition, openingStart, openingEnd);

	}

	return toTimeString(currentPosition);
}