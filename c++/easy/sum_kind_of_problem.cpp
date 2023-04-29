/*
-------------------------------------------------------
Problem: Sum Kind of Problem
-------------------------------------------------------
Description
For this problem you will compute various running sums of values for positive integers.
-------------------------------------------------------
Input
The first line of input contains a single integer P, (1 <= P <= 10 000), which is the number of data sets that follow. Each data set should be processed identically and independently. Each data set consists of a single line of input. It contains the data set number, K, followed by an integer N, (1 <= N <= 10 000).
-------------------------------------------------------
Output
For each data set there is one line of output. The single output line consists of the data set number, K, followed by a single space followed by three space separated integers S1, S2 and S3 such that:
    S1 = The sum of the first N positive integers.
    S2 = The sum of the first N odd integers.
    S3 = The sum of the first N even integers.
-------------------------------------------------------
*/
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int N, order, number, S1, S2, S3;

    cin >> N;

    int answers[N][3];

    for (int i=0; i < N; i++){
        cin >> order >> number;
        S1 = (1 + number) * number / 2;
        S2 = pow(number, 2);
        S3 = pow(number, 2) + number;

        answers[i][0] = S1;
        answers[i][1] = S2;
        answers[i][2] = S3;
    }

    for (int i=0; i < N; i++) {
        cout << i + 1 << ' ' << answers[i][0] << ' ' << answers[i][1] << ' ' << answers[i][2] << '\n';
    }

    return 0;
}