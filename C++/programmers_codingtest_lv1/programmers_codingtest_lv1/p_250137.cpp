#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    
    int max_health = health;

    int current_time = 0;
    int success_time = 0;

    for (int i = 0; i < attacks.size(); i++) {

        int attack_time = attacks[i][0];
        int damage = attacks[i][1];

        int timegap = attack_time - current_time - 1;

        for (int i = 0; i < timegap; i++) {

            if (health < max_health) {
                health += bandage[1];
                success_time++;

                if (success_time == bandage[0]) {
                    health += bandage[2];
                    success_time = 0;
                }

                if (health > max_health) health = max_health;

            }
            else
            {
                success_time = 0;
            }

        }

        health -= damage;

        if (health <= 0) return -1;
        
        current_time = attack_time;

        success_time = 0;
    }

    return health;
}