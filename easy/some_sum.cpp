/*
-------------------------------------------------------
Problem: Some Sum
-------------------------------------------------------
Description
Your friend has secretly picked N consecutive positive integers between 1 and 100, and wants you to guess if their sum is even or odd.

If the sum must be even, output ‘Even’. If the sum must be odd, output ‘Odd’. If the sum could be even or could be odd, output ‘Either’.
-------------------------------------------------------
Input
The input is a single integer N with 1 <= N <= 10.
-------------------------------------------------------
Output
Output a single word. The word should be ‘Even’, ‘Odd’, or ‘Either’, according to the rules given earlier.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    if (n % 2 == 1) {
        cout << "Either";
    } else if ((n / 2) % 2 == 0) {
        cout << "Even";
    } else if ((n / 2) % 2 == 1) {
        cout << "Odd";
    }

    return 0;
}