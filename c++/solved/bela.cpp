/*
-------------------------------------------------------
Problem: Bela
-------------------------------------------------------
Description
Young Mirko is a smart, but mischievous boy who often wanders around parks looking for new ideas. This time he’s come across pensioners playing the card game Belote. They’ve invited him to help them determine the total number of points in a game.

Each card can be uniquely determined by its number and suit. A set of four cards is called a hand. At the beginning of a game one suit that “trumps” any other is chosen, and it is called the dominant suit. The number of points in a game is equal to the sum of values of each card from each hand in the game. Mirko has noticed that the pensioners have played N hands and that suit B was the dominant suit.

The value of each card depends on its number and whether its suit is dominant, and is given in Table 1.

Write a programme that will determine and output the number of points in the game.
-------------------------------------------------------
Input
The first line contains the number of hands N (1 <= N <= 100) and the value of suit B (S, H, D, C) from the task. Each of the following 4N lines contains the description of a card (the first character is the number of the i-th card (A, K, Q, J, T, 9, 8, 7), and the second is the suit (S, H, D, C)).
-------------------------------------------------------
Output
The first and only line of output must contain the number of points from the task.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int num, sum = 0, value; 
    char dom;
    string input;

    cin >> num >> dom;

    for (int i = 0; i < num * 4; i++) {
        cin >> input;

        if (input[1] == dom) {
            switch(input[0]) {
                case 'A':
                    value = 11;
                    break;
                case 'K':
                    value = 4;
                    break;
                case 'Q':
                    value = 3;
                    break;
                case 'J':
                    value = 20;
                    break;
                case 'T':
                    value = 10;
                    break;
                case '9':
                    value = 14;
                    break;
                case '8':
                    value = 0;
                    break;
                case '7':
                    value = 0;
                    break;
            }
            sum += value;
        } else if (input[1] != dom) {
            switch(input[0]) {
                case 'A':
                    value = 11;
                    break;
                case 'K':
                    value = 4;
                    break;
                case 'Q':
                    value = 3;
                    break;
                case 'J':
                    value = 2;
                    break;
                case 'T':
                    value = 10;
                    break;
                case '9':
                    value = 0;
                    break;
                case '8':
                    value = 0;
                    break;
                case '7':
                    value = 0;
                    break;
            }
            sum += value;
        }

    }

    cout << sum;

    return 0;
}