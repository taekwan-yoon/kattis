/*
-------------------------------------------------------
Problem: Climbing Worm
-------------------------------------------------------
Description
A worm is at the bottom of a pole. It wants to reach the top, but it is too lazy to climb to the top without stopping. It can crawl up the pole a certain number of inches at a time, falling down a lesser number of inches right after while it rests. How many times does the worm need to crawl up in order to reach the top of the pole?
-------------------------------------------------------
Input
The input consists of a single line that contains three integers a,b (0 <= b < a <= 100), and h, (- < h <= 100 000) indicating the amount a of inches the worm can climb at a time, the amount b of inches the worm falls during its resting period, and the height h of the pole, respectively. For the purposes of this problem, the worm is modeled as a point and thus has no length.
-------------------------------------------------------
Output
Output the number of times the worm must crawl up in order to reach the top of the pole.
-------------------------------------------------------
*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, h, count=0;
    float answer;
    cin >> a >> b >> h;

    while(true) {
        h -= a;
        if (h <= 0) {
            count++; 
            break;
        }
        h += b;
        count++;
    }

    cout << count;


    return 0;
}