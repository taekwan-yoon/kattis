/*
-------------------------------------------------------
Problem: Pot
-------------------------------------------------------
Description
The teacher has sent an e-mail to her students with the following task: “Write a program that will determine and output the value of X if given the statement:
and it holds that number1, number2 to numberN are integers, and pow1, pow2 to powN are one-digit integers.” Unfortunately, when the teacher downloaded the task to her computer, the text formatting was lost so the task transformed into a sum of N integers:
For example, without text formatting, the original task in the form of X=21^2+125^3 became a task in the form of X=212+1253. Help the teacher by writing a program that will, for given N integers from P1 to P_N determine and output the value of X from the original task.
-------------------------------------------------------
Input
The first line of input contains the integer N (1 <= N <= 10), the number of the addends from the task. Each of the following N lines contains the integer P_i (10 <= P_i <= 9999, i = 1,...,N) from the task.
-------------------------------------------------------
Output
The first and only line of output must contain the value of X (X <= 1 000 000 000) from the original task.
-------------------------------------------------------
*/
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int count, number, exp, base;
    long long sum = 0;
    cin >> count;

    for (int i=0; i < count; i++) {
        cin >> number;
        exp = number % 10;
        base = number / 10;
        sum += pow(base, exp);
    }
    cout << sum;

    return 0;
}