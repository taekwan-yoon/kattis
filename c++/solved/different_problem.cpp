/*
-------------------------------------------------------
Problem: A Different Problem
-------------------------------------------------------
Description
Write a program that computes the difference between non-negative integers.
-------------------------------------------------------
Input
Each line of the input consists of a pair of integers. Each integer is between 0 and 10^15 (inclusive). The input is terminated by end of file.
-------------------------------------------------------
Output
For each pair of integers in the input, output one line, containing the absolute value of their difference.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

    long long num1, num2;
    vector<long long> answers;

    while (cin >> num1 >> num2){
        answers.push_back(abs(num1 - num2));
    }

    for (auto diff : answers) {
        cout << diff << '\n';
    }

    return 0;
}