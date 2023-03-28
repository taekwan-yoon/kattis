/*
-------------------------------------------------------
Problem: Grass Seed Inc.
-------------------------------------------------------
Description
Many years ago after another unfruitful day in Cubicle Land, banging her head against yet another cutting edge, marketing buzzword-filled JavaScript framework, Janice the engineer looked out of the window and decided that time was ripe for a change.

So swapping her keyboard and mouse for a fork and a spade, she started her own gardening company.

After years of hard outdoor work Janice now has biceps like Van Damme and owns the premiere landscaping company in the whole of the South West, and has just been lucky enough to broker a large contract to sow lawns for landed gentry.

Each contract details the size of the lawns that need to be seeded, and the cost of seed per square metre. How much do you need to spend on seed?
-------------------------------------------------------
Input
One line containing a real number C (0 < C <= 100), the cost of seed to sow one square metre of lawn.

One line containing an integer L (0 < L <= 100), the number of lawns to sow.

L lines, each containing two positive real numbers: w, the width of the lawn, and l, the length of the lawn.

All real numbers are given with at most 8 decimals after the decimal point.
-------------------------------------------------------
Output
One line containing a real number: the cost to sow all of the lawns.
-------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float C, w, l;
    int K;
    float sum = 0.0;

    cin >> C >> K;

    for (int i=0; i < K; i++){
        cin >> w >> l;
        sum += static_cast<float>((w*l) * C);
    }

    cout << fixed << setprecision(8) << sum;

    return 0;
}