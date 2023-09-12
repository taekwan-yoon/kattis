/*
-------------------------------------------------------
Problem: Another Candies
-------------------------------------------------------
Description
You are given the number of candies each child brought. Find out whether the teacher can divide the candies into N exactly equal heaps. (For the purpose of this task, all candies are of the same type.)
-------------------------------------------------------
Input
The first line of the input file contains an integer T, 1 <= T <= 100 specifying the number of test cases. Each test case is preceded by a blank line.

Each test case looks as follows: The first line contains N, 1 <= N <= 20 000 – the number of children. Each of the next N lines contains the number of candies one child brought. Each child has less than 2^63.
-------------------------------------------------------
Output
For each of the test cases output a single line with a single word "YES" if the candies can be distributed equally, or "NO" otherwise.
-------------------------------------------------------
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main() {
    int T, N;
    cin >> T;
    int validity[T];

    for (int i = 0; i < T; i++) {
        cin >> N;
        long long sum = 0;
        long long candies;
        if (N == 0) {
            validity[i] = 0;
        }
        else {
            for (int j=0; j < N; j++) {
                cin >> candies;
                sum += candies%N;
            }

            if ( sum%N == 0) {
                validity[i] = 1;
            } else {
                validity[i] = 0;
            }
        }

    }

    for (int i=0; i < T; i++) {
        if (validity[i] == 1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}