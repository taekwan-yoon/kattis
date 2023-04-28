/*
-------------------------------------------------------
Problem: Seven Wonders
-------------------------------------------------------
Description
Seven Wonders is a card drafting game in which players build structures to earn points. The player who ends with the most points wins. One winning strategy is to focus on building scientific structures. There are three types of scientific structure cards: Tablet (‘T’), Compass (‘C’), and Gear (‘G’). For each type of cards, a player earns a number of points that is equal to the squared number of that type of cards played. Additionally, for each set of three different scientific cards, a player scores 7 points.
-------------------------------------------------------
Input
The input has a single string with no more than 50 characters. The string contains only letters 'T', 'C', or 'G', which denote the scientific cards a player has played in a Seven Wonders game.
-------------------------------------------------------
Output
Output the number of scientific points the player earns.
-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>
#include <math.h>

using namespace std;
int main() {
    string cards;
    int sum = 0;
    int counts[3];
    cin >> cards;

    unordered_map<char, int> card_map;

    for (int i=0; i < cards.size(); i++) {
        card_map[cards.at(i)]++;
    }

    int i = 0;
    for (auto item : card_map) {
        sum += pow(item.second, 2);
        counts[i] = item.second;
        i++;
    }

    while (counts[0] > 0 && counts[1] > 0 && counts[2] > 0) {
        counts[0]--;
        counts[1]--;
        counts[2]--;
        sum += 7;
    }

    cout << sum;



    return 0;
}