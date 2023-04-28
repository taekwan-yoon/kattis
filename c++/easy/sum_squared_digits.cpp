/*
-------------------------------------------------------
Problem: Sum Squared Digits Function
-------------------------------------------------------
Description
The Sum Squared Digits function, SSD(b, n) of a positive integer n, in base b is defined by representing n in base b as in:
    n = a0, + a1 * b + a2 * b^2 + ...
then:
    SSD(b,n) = a_0^2 + a_1^2 + a_2^2 + ...
is the sum of squares of the digits of the representation.

Write a program to compute the Sum Squared Digits function of an input positive number.
-------------------------------------------------------
Input
The first line of input contains a single decimal integer P, (1<= P <= 1000), which is the number of data sets that follow. Each data set should be processed identically and independently.

Each data set consists of a single line of input. It contains the data set number, K, followed by the base, b (3<=b <= 16) as a decimal integer, followed by the positive integers, n (as a decimal integer) for which the Sum Squared Digits function is to be computed with respect to the base b. n will fit in a 32 bit unsigned integer. The data set number K starts 1 and is incremented by 1 for each data set.
-------------------------------------------------------
Output
For each data set there is a single line of output.

The single line of output consists of the data set number, K, followed by a single space followed by the value of SSD(b,n) as a decimal integer.
-------------------------------------------------------
*/
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int SSD(int base, int number);

int main() {

    int N, order, base, number;

    cin >> N; 

    int answers[N];

    for (int i=0; i < N; i++) {
        cin >> order >> base >> number;
        answers[i] = SSD(base, number);
    }

    for (int i=0; i < N; i++){
        cout << i+1 << ' ' << answers[i] << '\n';
    }

    return 0;
}

int SSD(int base, int number) {
    vector<int> remainders;
    int remainder;
    while (number != 0) {
        remainder = number % base;
        remainders.push_back(remainder);
        number /= base;
    }

    int sum = 0;

    for (int i=0; i<remainders.size(); i++) {
        sum += pow(remainders[i], 2);
    }
    return sum;
}

