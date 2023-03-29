/*
-------------------------------------------------------
Problem: Odd Echo
-------------------------------------------------------
Description
ECHO! Echo! Ech...

You love shouting in caves to hear your words echoed back at you. Unfortunately, as a hard-working software engineer you are not lucky enough to get out that often to shout in caves. Instead, you would like to implement a program that serves as a replacement for a cave.

Every now and then, you want to input a few words into the program and have them echoed back to you. However, as is well known, if you shout too quickly in a cave, the echo might cause interference with the new words you say. More specifically, every other word you say will interfere with the echo of your previous word. Thus only the first, third, fifth, and so on, words will actually produce an echo.

Your task is to write a program that simulates this behavior.
-------------------------------------------------------
Input
The first line of the input contains an integer N (1 <= N <= 10).

The next N lines each contains a word. Each word is at most 100 letters long, and contains only letters ‘a-z‘.
-------------------------------------------------------
Output
Output the odd-indexed (i.e. first, third, fifth, and so on) words in the input.-------------------------------------------------------
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    string echo;
    vector<string> echos;

    for (int i=0; i < N; i++) {
        cin >> echo;
        if (i % 2 == 0) {
            echos.push_back(echo);
        }
    }

    int count = 0;
    for (string echo : echos) {
        if (count == echos.size() - 1) {
            cout << echo;
        } else {
            cout << echo << '\n';
            count++;
        }
    }

    return 0;
}