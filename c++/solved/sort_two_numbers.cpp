/*
-------------------------------------------------------
Problem: Stopwatch
-------------------------------------------------------
Description
In this problem, your program should read two whole numbers (also called integers) from the input, and print them out in increasing order.

As a refresher, here are some ways to read two numbers from standard input in a few different languages:
-------------------------------------------------------
Input
The input contains one line, which has two integers a and b, separated by a single space. The bounds on these values are 0 <= a,b <= 1 000 000.
-------------------------------------------------------
Output
Output the smaller number first, and the larger number second.
-------------------------------------------------------
*/
#include <iostream>
#include <set>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int lst[2];

    if (a > b) {
        lst[0] = b;
        lst[1] = a;
    } else {
        lst[0] = a;
        lst[1] = b;
    }

    cout << lst[0] << ' ' << lst[1];

    return 0;
}