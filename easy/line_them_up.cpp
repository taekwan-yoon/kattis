/*
-------------------------------------------------------
Problem: Line Them Up
-------------------------------------------------------
Description
An eccentric coach asks players on the team to line up alphabetically at the start of practice. The coach does not tell the players whether they need to line up in increasing or decreasing order, so they guess. If they guess wrong, the coach makes them run laps before practice. Given a list of names, you are to determine if the list is in increasing alphabetical order, decreasing alphabetical order or neither.
-------------------------------------------------------
Input
The input consists of a single test case. The first line will contain the number N of people on the team (2 <= N <= 20). Following that are N lines, each containing the name of one person. A name will be at least two characters and at most 12 characters in length and will consist only of capital letters, and with no white spaces (sorry BILLY BOB and MARY JOE). Duplicates names will not be allowed on a team.
-------------------------------------------------------
Output
Output a single word: INCREASING if the list is in increasing alphabetical order, DECREASING if it is in decreasing alphabetical order, and otherwise NEITHER.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N;
    cin >> N;
    string names[N];
    int array[N-1];
    bool decrease = false, increase = false;

    for (int i=0; i < N; i++) {
        cin >> names[i];
    }

    for (int i=0; i < N - 1; i++) {
        if (names[i] == names[i+1]) {
            array[i] = 2;
        } else if (names[i] > names[i+1]) {
            array[i] = 1;
        } else if (names[i] < names[i+1]) {
            array[i] = 0;
        }
    }

    for (int i=0; i < N - 1; i++) {
        if (array[i] == 2) {
            cout << "NEITHER";
            break;
        } else {
            if (array[i] == 1) {
                decrease = true;
            } else {
                increase = true;
            }
        }
    }

    if (decrease && increase){
        cout << "Neither";
    } else if (decrease) {
        cout << "DECREASING";
    } else if (increase) {
        cout << "INCREASING";
    }

    return 0;
}