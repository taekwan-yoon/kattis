/*
-------------------------------------------------------
Problem: Number Fun
-------------------------------------------------------
Description
Ms. Greene is trying to design a game for her third-grade class to practice their addition, subtraction, multiplication, and division. She would like for every student in her class to be able to “think mathematically” and determine if any two given numbers can be added, subtracted, multiplied, or divided in any way to produce a third given number. However, she would like to be able to check her students’ work quickly without having to think about it herself.

Help Ms. Greene by writing a program that inputs two given numbers and determines whether or not it is possible to add, subtract, multiply, or divide those two numbers in any order to produce the third number. Only one operation may be used to produce the third number.
-------------------------------------------------------
Input
Each input file will start with a single integer N (1 <= N <= 10 000) denoting the number of test cases. The following N lines will contain sets of 3 numbers a, b, c (1 <= a, b, c <= 10 000).
-------------------------------------------------------
Output
For each test case, determine whether or not it is possible to produce the third number, c, using the first two numbers, a and b, using addition, subtraction, multiplication, or division.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N;
    float first, second, result;

    cin >> N;
    int possibility[N];

    for (int i=0; i < N; i++) {
        possibility[i] = 0;
    }

    for (int i=0; i < N; i++) {
        cin >> first >> second >> result;

        if (first + second == result) {
            possibility[i] = 1;
        } else if (first - second == result || second - first == result) {
            possibility[i] = 1;
        } else if (first * second == result) {
            possibility[i] = 1;
        } else if (first / second == result || second / first == result) {
            possibility[i] = 1;
        }
    }

    for (int i=0; i < N; i++) {
        if (possibility[i] == 1) {
            cout << "Possible" << '\n';
        } else {
            cout << "Impossible" << '\n';
        }
    }



    return 0;
}