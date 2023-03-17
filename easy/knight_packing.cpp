/*
-------------------------------------------------------
Problem: Knight Packing
-------------------------------------------------------
Description
On a N x N chess board, two players alternate placing a knight on the board. A knight can only be placed if there is no other knight which would be either 1 row and 2 columns or 2 rows and 1 column away from it. The first player who cannot place a knight on the board loses.
Given the size of the board, compute if the first or second player wins.
-------------------------------------------------------
Input
The first and only line contains the integer N (1 <= N <= 1000), the size of the board.
-------------------------------------------------------
Output
Output first if the first player wins the game, or second if the second player wins the game.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main(){
    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << "second";
    } else {
        cout << "first";
    }
    return 0;
}