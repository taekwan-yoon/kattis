/*
Link: https://open.kattis.com/problems/janitortroubles
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;
int main() {

    double a, b, c, d;

    cin >> a >> b >> c >> d;

    double s = (a + b + c + d) / 2;

    double max = sqrt((s - a)*(s - b)*(s - c)*(s - d));

    cout << fixed << setprecision(6) << max;

    return 0;
}