#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {

	unordered_map<string, int> player_positions;

	for (int i = 0; i < players.size(); i++) {
		player_positions[players[i]] = i;
	}

	for (auto& call : callings) {

		int position = player_positions[call];

		if (position > 0) {

			string previous = players[position - 1];

			swap(players[position], players[position - 1]);

			player_positions[call]--;
			player_positions[previous]++;

		}

	}

	return players;
}

