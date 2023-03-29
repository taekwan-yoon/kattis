/*
-------------------------------------------------------
Problem: Echo Echo Echo
-------------------------------------------------------
Description
If you have ever visited a canyon or a cave, you may have yelled and heard the echo of your own voice. In this problem, you should simulate that effect:

Hello! Hello! Hello!
Your program will be given as input a single word, and it should print out that word three times, separating the words with spaces.-------------------------------------------------------
Input
Input is a single line, containing exactly one word. The only characters used are upper and/or lowercase letters (a–z). The word contains at least one and at most 15 characters.
-------------------------------------------------------
Output
Output the given word three times, separated by spaces.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    string word;

    cin >> word;

    for (int i=0; i< 3; i++) {
        cout << word;
        if (i != 2) {
            cout << ' ';
        }
    }

    return 0;
}