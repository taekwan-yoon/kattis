/*
-------------------------------------------------------
Problem: Yin and Yang Stones
-------------------------------------------------------
Description
A mysterious circular arrangement of black stones and white stones has appeared. Ming has been tasked with balancing the stones so that only one black and one white stone remain.

Ming has two operations for balancing the stones:

1. Take some consecutive sequence of stones where there is exactly one more black stone than a white stone and replace the stones with a single black stone

2. Take some consecutive sequence of stones where there is exactly one more white stone than black stone and replace the stones with a single white stone

Given a circular arrangement, determine if it is possible for Ming to balance the stones.
-------------------------------------------------------
Input
Each input will consist of a single test case. Note that your program may be run multiple times on different inputs. The input will consist of a single string s (1<= |s| <= 10^5), with only the characters capital ‘B’ and ‘W’. The stones are arranged in a circle, so the first stone and the last stone are adjacent.
-------------------------------------------------------
Output
Output 1 if it is possible for Ming to balance the stones with his rules. Otherwise, output 0.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string s;

    cin >> s;

    int W=0, B=0;

    for (int i=0; i < s.size(); i++) {
        if (s[i] == 'W') {
            W++;
        } else if (s[i] == 'B') {
            B++;
        }
    }

    if (W == B) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}