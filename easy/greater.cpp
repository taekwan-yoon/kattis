/*
-------------------------------------------------------
Problem: Which is Greater?
-------------------------------------------------------
Description
Given two positive integers, determine whether the first one is larger than the second one.
-------------------------------------------------------
Input
The single line of input contains two positive integers, a and b (0<a,b≤109).
-------------------------------------------------------
Output
Output a single line with 1 if a>b, 0 otherwise.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    long int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}