/*
-------------------------------------------------------
Problem: Contest Struggles
-------------------------------------------------------
Description
Lotte is competing in a programming contest. Her team has already solved k out of the n problems in the problem set, but as the problems become harder, she begins to lose focus and her mind starts to wander.
She recalls hearing the judges talk about the difficulty of the problems, which they rate on an integer scale from 0 to 100, inclusive. In fact, one of the judges said that “the problem set has never been so tough, the average difficulty of the problems in the problem set is 
!”

She starts thinking about the problems her team has solved so far, and comes up with an estimate s for their average difficulty. In hope of gaining some motivation, Lotte wonders if she can use this information to determine the average difficulty of the remaining problems.
-------------------------------------------------------
Input
The input consists of:

One line with two integers n and k (2 <= n <= 10^6, 0 < k < n), the total number of problems and the number of problems Lotte’s team has solved so far.

One line with two integers d and s (0 <= d, s <= 100), the average difficulty of all the problems and Lotte’s estimate of the average difficulty of the problems her team has solved.
-------------------------------------------------------
Output
Assuming Lotte’s estimate is correct, output the average difficulty of the unsolved problems, or “impossible” if the average difficulty does not exist. Your answer should have an absolute or relative error of at most 10^-6.
-------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int n, k, d, s;
    double average;

    cin >> n >> k >> d >> s;
    cout << setprecision(10);


    average = (double) (n * d - k * s)/(n - k);
    if (average > 100 || average < 0) {
        cout << "impossible";
    } else {
        cout << average;
    }


    return 0;
}