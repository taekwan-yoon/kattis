/*
-------------------------------------------------------
Problem: Add Two Numbers
-------------------------------------------------------
Description
In this problem, your program should read two whole numbers (also called integers) from the input, and print out their sum.

As a refresher, here are some ways to read two numbers from standard input in a few different languages:
-------------------------------------------------------
Input
The input contains one line, which has two integers a and b, separated by a single space. The bounds on these values are 0 <= a, b <= 1 000 000.
-------------------------------------------------------
Output
Output the sum of the two integers, a+b.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}