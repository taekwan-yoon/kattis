/*
-------------------------------------------------------
Problem: Tower Construction
-------------------------------------------------------
Description
Kim’s current obsession is to build towers from ordered sequences of Lego bricks. The towers are built one at a time, brick by brick. The first available brick is the base of the first tower. If the next available brick is wider than the top of the current tower, we say that the current tower is finished and make the brick the base of a new tower. Otherwise, the brick is placed (in an arbitrary fashion) on top of the current tower.

Given the ordering and widths of the bricks, how many towers is Kim going to build?
-------------------------------------------------------
Input
An integer N with 1 <= N <= 10^5, followed by a line consisting of N integers xi, where 1 <= xi <= 10^6, corresponding to the width of the bricks in the order they are available.
-------------------------------------------------------
Output
A single integer, the number of resulting towers.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N, base = 0, count = 0, current;
    cin >> N;
    for (int i=0; i < N; i++) {
        cin >> current;
        if (current > base) {
            count++;
        }
        base = current;
    }

    cout << count;

    return 0;
}