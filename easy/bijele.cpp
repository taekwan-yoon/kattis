/*
-------------------------------------------------------
Problem: Bijele
-------------------------------------------------------
Description
Mirko has found an old chessboard and a set of pieces in his attic. Unfortunately, the set contains only white pieces, and apparently an incorrect number of them. A set of pieces should contain:

One king

One queen

Two rooks

Two bishops

Two knights

Eight pawns

Mirko would like to know how many pieces of each type he should add or remove to make a valid set.
-------------------------------------------------------
Input
The input consists of 6 integers on a single line, each between 0 and 10 (inclusive). The numbers are, in order, the numbers of kings, queens, rooks, bishops, knights and pawns in the set Mirko found.
-------------------------------------------------------
Output
Output should consist of 6 integers on a single line; the number of pieces of each type Mirko should add or remove. If a number is positive, Mirko needs to add that many pieces. If a number is negative, Mirko needs to remove pieces.-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int correct_list[] = {1, 1, 2, 2, 2, 8};
    int current_list[6];
    int piece;
    for (int i=0; i < 6; i++){
        cin >> piece;
        current_list[i] = piece;
    }

    for (int i=0; i < 6; i++) {
        if (i == 5) {
            cout << correct_list[i] - current_list[i];
        } else {
            cout << correct_list[i] - current_list[i] << ' ';
        }
    }

    return 0;
}