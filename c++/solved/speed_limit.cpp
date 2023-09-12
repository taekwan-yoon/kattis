/*
-------------------------------------------------------
Problem: Speed Limit
-------------------------------------------------------
Description
Bill and Ted are taking a road trip. But the odometer in their car is broken, so they don’t know how many miles they have driven. Fortunately, Bill has a working stopwatch, so they can record their speed and the total time they have driven. Unfortunately, their record keeping strategy is a little odd, so they need help computing the total distance driven. You are to write a program to do this computation.

-------------------------------------------------------
Input
The input consists of one or more data sets (at most 10). Each set starts with a line containing an integer n, 1 <= n <= 10, followed by n pairs of values, one pair per line. The first value in a pair, s, is the speed in miles per hour and the second value, t, is the total elapsed time. Both s and t are integers, 1<= s <= 90 and 1 <= t <= 12. The values for t are always in strictly increasing order. A value of -1 for n signals the end of the input.
-------------------------------------------------------
Output
For each input set, print the distance driven, followed by a space, followed by the word “miles”.
-------------------------------------------------------
*/

#include <iostream>

using namespace std;
int main() {
    int n, s, t;
    int miles = 0;
    int old_t = 0;
    
    cin >> n;

    while (n != -1) {
        for (int i=0; i < n; i++) {
            cin >> s >> t;
            miles += s * (t-old_t);
            old_t = t;
        }
        cout << miles << " miles" << '\n';
        miles = 0;
        old_t = 0;
        cin >> n;
    }


    return 0;
}