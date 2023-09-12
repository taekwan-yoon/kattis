/*
-------------------------------------------------------
Problem: Dice Game
-------------------------------------------------------
Description
Gunnar and Emma play a lot of board games at home, so they own many dice that are not normal 6-sided dice. For example they own a die that has 10 sides with numbers 47, 48, ..., 56 on it.

There has been a big storm in Stockholm, so Gunnar and Emma have been stuck at home without electricity for a couple of hours. They have finished playing all the games they have, so they came up with a new one. Each player has 2 dice which he or she rolls. The player with a bigger sum wins. If both sums are the same, the game ends in a tie.
-------------------------------------------------------
Input
The first line contains four integers a_1, b_1, a_2, b_2 that describe Gunnar's dice. Die number i contains numbers a_i, a_i + 1, ... b_i on its sides. You may assume that 1 <= a_i <= b_i <= 100. You can further assume that each die has at least four sides, so a_i + 3 <= b_i. 

The second line contains the description of Emma's dice in the same format.
-------------------------------------------------------
Output
Output the name of the player that has higher probability of winning. Output “Tie” if both players have same probability of winning.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int emma=0, gunnar=0;

    int num;

    for (int i=0; i<4; i++){
        cin >> num;
        gunnar += num;
    }


    for (int i=0; i<4; i++){
        cin >> num;
        emma += num;
    }

    if (gunnar > emma) {
        cout << "Gunnar";
    } else if (emma > gunnar) {
        cout << "Emma";
    } else {
        cout << "Tie";
    }


    return 0;
}